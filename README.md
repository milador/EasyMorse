# EasyMorse
A simplified Morse code library to be used as a method of Communication.

This is a light weight morse library based on morse2go project with addition of direct keyboard and mouse support. 

# Morse code mapping ( Mouse mode )

 <table style="width:100%">
  <tr>
    <th>Morse code</th>
    <th>Result</th>
  </tr>
    <tr>
    <td>-</td>
    <td>Move Up</td>
  </tr>
  <tr>
    <td>--</td>
    <td>Move Down</td>
  </tr>
  <tr>
    <td>..</td>
    <td>Move Left</td>
  </tr>
  <tr>
    <td>...</td>
    <td>Move Right</td>
  </tr>
  <tr>
    <td>.-</td>
    <td>Left Click</td>
  </tr>
  <tr>
    <td>.--</td>
    <td>Right Click</td>
  </tr>
    <tr>
    <td>..-</td>
    <td>Double Left Click</td>
  </tr>
  <tr>
    <td>..--</td>
    <td>Double Right Click</td>
  </tr>  
  <tr>
    <td>-.</td>
    <td>Left Click & Hold/Release</td>
  </tr>  
  <tr>
    <td>-..</td>
    <td>Right Click & Hold/Release</td>
  </tr>  
</table> 


# Usage 

  1. Download and extract this repository as EasyMorse under Arduino libraries subdirectory. 

  2. Include EasyMorse class in your sketch 
```
#include "EasyMorse.h"
```

  3. Initialize EasyMorse class
```
EasyMorse morse;
```
  4. Initialize time variables for morse code
```
unsigned MS_MIN_DD = 50;
unsigned MS_MAX_DD =5000;
unsigned MS_END =5000;
unsigned MS_CL =5000;
```

  5. Clear morse stack before each usage (Each dot or dash push)
```
morse.clear();
```
  6. Push Dot (1) or Dash (2) to the stack
```
morse.push(1);
morse.push(2);
```

  7. Output the character using Keyboard library 
```
Keyboard.write(morse.getCharAscii()); 
```

  8. Output the mouse action using mouse library 
```
int* mouseAct;
mouseAct=morse.getMouse();
Mouse.press((int)mouseAct[0]);
Mouse.move((int)mouseAct[1],(int)mouseAct[2], 0);
```

# Methods 
 <table style="width:100%">
  <tr>
    <th>Method</th>
    <th>Return Type</th>
    <th>Explanation</th>
  </tr>
    <tr>
    <td>pointer</td>
    <td>int</td>
    <td>Pointer to top of the stack</td>
  </tr>
  <tr>
    <td>dotDash[MAXDD]</td>
    <td>int</td>
    <td>Stack of dot and dashes</td>
  </tr>
  <tr>
    <td>clear()</td>
    <td>void</td>
    <td>Clear the stack</td>
  </tr>
  <tr>
    <td>push(int)</td>
    <td>void</td>
    <td>Push a dot or dash to the stack </td>
  </tr>
  <tr>
    <td>pop()</td>
    <td>void</td>
    <td>Pop last dot or dash from the stack</td>
  </tr>
  <tr>
    <td>getCharNum()</td>
    <td>long</td>
    <td>Get number value of character. Example: .- = 12</td>
  </tr>
    <tr>
    <td>getChar()</td>
    <td>char</td>
    <td>Get the resulting character</td>
  </tr>
  <tr>
    <td>getCharAscii()</td>
    <td>int</td>
    <td>Get the resulting character</td>
  </tr>  
  <tr>
    <td>getMouse()</td>
    <td>int*</td>
    <td>Get the resulting mouse action </td>
  </tr>  
</table> 
