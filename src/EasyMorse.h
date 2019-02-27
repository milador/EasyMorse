#ifndef EasyMorse_h
#define EasyMorse_h

#include "Arduino.h"

//EasyMorse Library
//EasyMorse.h
//Written by: Milad Hajihassan
//Version 1.0 (13/1/2019)
//Based on : https://github.com/morse2go/morse2go


//Time constants

#define MOUSE_MOVE 10                           //Each mouse move
#define MAXDD 20                                //Size of Dot and Dash stack
#define MS_MIN_DD 50                            //Min time for single Dot or Dash
#define MS_MAX_DD 5000                          //Max time for single Dot or Dash
#define MS_END 5000                             //Time to end a letter
#define MS_CL 5000                              //Holding time for dot or dash to clear a letter

typedef struct { 
  int num;
  long int numCode;
  const char* lowerChar;
  int asciiCode;
} charStruct;

typedef struct { 
  int num;
  long int numCode;
} mouseStruct;


//Character class with methods and operations dot and dashes stack
class EasyMorse {
  public:
    EasyMorse();
    int dotDash[MAXDD];                                           //Stack of dot and dashes 
    int pointer;                                                  //Pointer to top of the stack
    void clear();                                                  //Clear the stack
    void push(int);                                                //Push a dot or dash to the stack  
    void pop();                                                    //Pop last dot or dash from the stack    
    long getCharNum();                                            //Get number value of character. Example: .- = 12
    char getChar();                                               //Get the resulting character
    int getCharAscii();                                           //Get the resulting Ascii code 
    int* getMouse();                                              //Get the resulting mouse action 
    
};

#endif