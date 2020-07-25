//EasyMorse Library
//EasyMorse.cpp
//Written by: Milad Hajihassan
//Version 1.0 (13/1/2019)
//Based on : https://github.com/morse2go/morse2go

#include <stdlib.h>
#include "Arduino.h"
#include "EasyMorse.h"

//Morse to character dictionary 
 const charStruct charDictionary[] {
    {0,12,"a",97},                           //a
    {1,2111,"b",98},                         //b
    {2,2221,"c",99},                         //c
    {3,211,"d",100},                         //d
    {4,1,"e",101},                           //e
    {5,1121,"f",102},                        //f
    {6,221,"g",103},                         //g
    {7,1111,"h",104},                        //h
    {8,11,"i",105},                          //i
    {9,1222,"j",106},                        //j
    {10,212,"k",107},                        //k
    {11,1211,"l",108},                       //l
    {12,2222,"m",109},                       //m
    {13,21,"n",110},                         //n
    {14,222,"o",111},                        //o
    {15,1221,"p",112},                       //p
    {16,2212,"q",113},                       //q
    {17,121,"r",114},                        //r
    {18,111,"s",115},                        //s
    {19,2,"t",116},                          //t
    {20,112,"u",117},                        //u
    {21,1112,"v",118},                       //v
    {22,122,"w",119},                        //w
    {23,2112,"x",120},                       //x
    {24,2122,"y",121},                       //y
    {25,2211,"z",122},                       //z
    {26,12222,"1",49},                       //1
    {27,11222,"2",50},                       //2
    {28,11122,"3",51},                       //3
    {29,11112,"4",52},                       //4
    {30,11111,"5",53},                       //5
    {31,21111,"6",54},                       //6
    {32,22111,"7",55},                       //7
    {33,22211,"8",56},                       //8
    {34,22221,"9",57},                       //9
    {35,22222,"0",48},                       //0
    {36,222211,"'\'",92},                    //'\'
    {37,111122,"/",47},                      ///
    {38,122111,"[",91},                      //[
    {39,211222,"]",93},                      //]
    {40,221122,"<",60},                      //<
    {41,112211,">",62},                      //>
    {42,222111,"(",40},                      //(
    {43,111222,")",41},                      //)
    {44,22112,"}",125},                      //}
    {45,11221,"{",123},                      //{
    {46,122222,".",46},                      //.
    {47,211111,",",44},                      //,
    {48,222212,"_",95},                      //_
    {49,111121,"|",124},                     //|
    {50,212222,"?",63},                      //?
    {51,121111,"!",33},                      //!
    {52,211112,";",59},                      //
    {53,122221,":",58},                      //
    {54,12221,"-",45},                       //-
    {55,112222,"$",36},                      //$
    {56,111212,"%",37},                      //%
    {57,111221,"\"",34},                     //"
    {58,222112,"@",64},                      //@
    {59,112111,"'",39},                      //'
    {60,221222,"`",96},                      //`
    {61,211122,"^",94},                      //^
    {62,222122,"~",126},                     //~
    {63,112221,"#",35},                      //#
    {64,122211,"&",38},                      //&
    {65,21112,"+",43},                       //+
    {66,22212,"=",61},                       //=
    {67,21122,"*",42},                       //*
    {68,1122,"",32},                         //Space
    {69,1212,"",10},                         //Enter
    {70,22,"",8},                            //Backspace 
    {71,221112,"",129},                      //Shift
    {72,2121,"",128},                        //Ctrl
    {73,22122,"",130},                       //Alt
    {74,12112,"",218},                       //Arrow Up
    {75,12211,"",217},                       //Arrow Down 
    {76,121211,"",216},                      //Arrow Left
    {77,12121,"",215},                       //Arrow Right
    {78,111112,"",211},                      //PgUp
    {79,111211,"",214},                      //PgDown
    {80,1111111,"",210},                     //Home
    {81,1112111,"",213},                     //End
    {82,2221112,"",0},                       //NumLock
    {83,221211,"",0},                        //ScrollLock
    {84,222221,"",193},                      //CapsLock
    {85,221111,"",177},                      //ESC
    {86,21211,"",209},                       //Insert
    {87,212211,"",212},                      //Delete
    {88,221221,"",206}                       //PrtScn

};

//Morse to mouse action dictionary
 const mouseStruct mouseDictionary[] {
    {0,2},                                       //Up
    {1,22},                                     //Down
    {2,11},                                     //Left
    {3,111},                                   //Right
    {4,12},                                     //Left Click
    {5,122},                                   //Right Click
    {6,112},                                   //Double Left Click
    {7,1122},                                 //Double Right Click
    {8,21},                                     //Left Click & Hold/Release
    {9,211}                                   //Right Click& Hold/Release
 };

// --------------- Functions ------------------

EasyMorse::EasyMorse() {
  clear();
}

void EasyMorse::clear() {
  for (int i=0; i < MAXDD; i++)
    dotDash[i] = 0;
  pointer = 0;
}

void EasyMorse::push(int c) {
  if (pointer < MAXDD)
    dotDash[pointer++] = c;    
}

void EasyMorse::pop() {
  if (pointer >= 0) {
    dotDash[pointer] = 0;
    pointer--;
  } 
}

//Get number value of character. Example: .- = 12
long EasyMorse::getCharNum() {
  int mult = 1;
  int i;
  long charNum = 0;
  
  for (i = pointer-1; i > -1; i--) {
    charNum = charNum + (dotDash[i] * mult);
    mult = mult * 10;
  }
  return charNum;
}

//Get the resulting character 
char EasyMorse::getChar() {  
  int mult = 1;
  int j;
  char charOut;
  long charNum = getCharNum();

  //Search for character based on character number
  for(uint8_t j = 0; j < sizeof(charDictionary)/sizeof(charStruct); ++j) {
    if(charNum == charDictionary[j].numCode)
    {
      charOut= charDictionary[j].lowerChar[0];
    }
  }
  return charOut;
}


//Get the resulting Ascii code 
int EasyMorse::getCharAscii() {  
  int mult = 1;
  int j;
  int asciiOut = 0;
  long charNum = getCharNum();
  //Search for Ascii code based on character number
  for(uint8_t j = 0; j < sizeof(charDictionary)/sizeof(charStruct); ++j) {
    if(charNum == charDictionary[j].numCode)
    {
      asciiOut= charDictionary[j].asciiCode;
    }
  }
  return asciiOut;
}


//Get the resulting mouse action 
int* EasyMorse::getMouse() {  
  int mult = 1;
  int j;
  static int mouseAction[4];
  mouseAction[0]= 0;
  mouseAction[1]= 0;
  mouseAction[2]= 0;
  mouseAction[3]= 0;
  long charNum = getCharNum();
  //Output mouse action 
  for(uint8_t j = 0; j < sizeof(mouseDictionary)/sizeof(mouseStruct); ++j) {
    if(charNum == mouseDictionary[j].numCode)
    {
        switch (mouseDictionary[j].num) {
          case 0:
            mouseAction[2]=-MOUSE_MOVE;
          break;
          case 1:
            mouseAction[2]=MOUSE_MOVE;
          break;
          case 2:
            mouseAction[1]=-MOUSE_MOVE;
          break;      
          case 3:
            mouseAction[1]=MOUSE_MOVE;
          break; 
          case 4:
            mouseAction[0]=1;
          break;     
          case 5:
            mouseAction[0]=2;
          break;
          case 6:
            mouseAction[0]=3;
          break;      
          case 7:
            mouseAction[0]=4;
          break; 
          case 8:
            mouseAction[0]=5;
          break;
          case 9:
            mouseAction[0]=6;
          break;                            
        default:
        break;
      }
    }
  }
  
  return mouseAction;
}
