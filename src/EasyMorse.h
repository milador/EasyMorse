#ifndef EasyMorse_h
#define EasyMorse_h

#include "Arduino.h"

//EasyMorse Library
//EasyMorse.h
//Written by: Milad Hajihassan
//Version 1.0 (13/1/2019)
//Based on : https://github.com/morse2go/morse2go

/*

MIT License

Copyright (c) 2019 Milador

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, 
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH 
THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/


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