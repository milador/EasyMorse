//KeyboardMorse example

#include "EasyMorse.h"
#include "Keyboard.h"

EasyMorse morse;


void setup()
{
  Serial.begin(9600);
  morse.clear();
    
  //Start keyboard emulation
  Keyboard.begin();

}
void loop() {

  //Type Hello

  //H
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear();
  
  //E
  morse.push(1);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear();
  
  //L
  morse.push(1);
  delay(1000);
  morse.push(2);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear();
    
  //L
  morse.push(1);
  delay(1000);
  morse.push(2);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear();

  //O
  morse.push(2);
  delay(1000);
  morse.push(2);
  delay(1000);
  morse.push(2);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear(); 


  //!
  morse.push(1);
  delay(1000);
  morse.push(2);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear();

  //Space
  morse.push(1);
  delay(1000);
  morse.push(1);
  delay(1000);
  morse.push(2);
  delay(1000);
  morse.push(2);
  delay(1000);
  Keyboard.write(morse.getCharAscii()); 
  morse.clear();

  delay(5000);
}
