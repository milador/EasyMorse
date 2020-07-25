# EasyMorse
A light weight Morse code library to be used as a method of Communication along adaptive switches in open-source Assistive Technology projects.

This is a light weight morse library based on morse2go project with addition of direct keyboard and mouse support. 

# Morse code mapping ( Keyboard mode )
 <table style="width:100%">
  <tr>
    <th>Morse code</th>
    <th>Result</th>
  </tr>
<tr>
<td>.-</td>
<td>a</td>
</tr>
<tr>
<td>-...</td>
<td>b</td>
</tr>
<tr>
<td>---.</td>
<td>c</td>
</tr>
<tr>
<td>-..</td>
<td>d</td>
</tr>
<tr>
<td>.</td>
<td>e</td>
</tr>
<tr>
<td>..-.</td>
<td>f</td>
</tr>
<tr>
<td>--.</td>
<td>g</td>
</tr>
<tr>
<td>....</td>
<td>h</td>
</tr>
<tr>
<td>..</td>
<td>i</td>
</tr>
<tr>
<td>.---</td>
<td>j</td>
</tr>
<tr>
<td>-.-</td>
<td>k</td>
</tr>
<tr>
<td>.-..</td>
<td>l</td>
</tr>
<tr>
<td>----</td>
<td>m</td>
</tr>
<tr>
<td>-.</td>
<td>n</td>
</tr>
<tr>
<td>---</td>
<td>o</td>
</tr>
<tr>
<td>.--.</td>
<td>p</td>
</tr>
<tr>
<td>--.-</td>
<td>q</td>
</tr>
<tr>
<td>.-.</td>
<td>r</td>
</tr>
<tr>
<td>...</td>
<td>s</td>
</tr>
<tr>
<td>-</td>
<td>t</td>
</tr>
<tr>
<td>..-</td>
<td>u</td>
</tr>
<tr>
<td>...-</td>
<td>v</td>
</tr>
<tr>
<td>.--</td>
<td>w</td>
</tr>
<tr>
<td>-..-</td>
<td>x</td>
</tr>
<tr>
<td>-.--</td>
<td>y</td>
</tr>
<tr>
<td>--..</td>
<td>z</td>
</tr>
<tr>
<td>.----</td>
<td>1</td>
</tr>
<tr>
<td>..---</td>
<td>2</td>
</tr>
<tr>
<td>...--</td>
<td>3</td>
</tr>
<tr>
<td>....-</td>
<td>4</td>
</tr>
<tr>
<td>.....</td>
<td>5</td>
</tr>
<tr>
<td>-....</td>
<td>6</td>
</tr>
<tr>
<td>--...</td>
<td>7</td>
</tr>
<tr>
<td>---..</td>
<td>8</td>
</tr>
<tr>
<td>----.</td>
<td>9</td>
</tr>
<tr>
<td>-----</td>
<td>0</td>
</tr>
<tr>
<td>----..</td>
<td>\</td>
</tr>
<tr>
<td>....--</td>
<td>/</td>
</tr>
<tr>
<td>.--...</td>
<td>[</td>
</tr>
<tr>
<td>-..---</td>
<td>]</td>
</tr>
<tr>
<td>--..--</td>
<td><</td>
</tr>
<tr>
<td>..--..</td>
<td>></td>
</tr>
<tr>
<td>---...</td>
<td>(</td>
</tr>
<tr>
<td>...---</td>
<td>)</td>
</tr>
<tr>
<td>--..-</td>
<td>}</td>
</tr>
<tr>
<td>..--.</td>
<td>{</td>
</tr>
<tr>
<td>.-----</td>
<td>.</td>
</tr>
<tr>
<td>-.....</td>
<td>,</td>
</tr>
<tr>
<td>----.-</td>
<td>_</td>
</tr>
<tr>
<td>....-.</td>
<td>|</td>
</tr>
<tr>
<td>-.----</td>
<td>?</td>
</tr>
<tr>
<td>.-....</td>
<td>!</td>
</tr>
<tr>
<td>-....-</td>
<td>;</td>
</tr>
<tr>
<td>.----.</td>
<td>:</td>
</tr>
<tr>
<td>.---.</td>
<td>-</td>
</tr>
<tr>
<td>..----</td>
<td>$</td>
</tr>
<tr>
<td>...-.-</td>
<td>%</td>
</tr>
<tr>
<td>...--.</td>
<td>"</td>
</tr>
<tr>
<td>---..-</td>
<td>@</td>
</tr>
<tr>
<td>..-...</td>
<td>'</td>
</tr>
<tr>
<td>--.---</td>
<td>`</td>
</tr>
<tr>
<td>-...--</td>
<td>^</td>
</tr>
<tr>
<td>---.--</td>
<td>~</td>
</tr>
<tr>
<td>..---.</td>
<td>#</td>
</tr>
<tr>
<td>.---..</td>
<td>&</td>
</tr>
<tr>
<td>-...-</td>
<td>+</td>
</tr>
<tr>
<td>---.-</td>
<td>=</td>
</tr>
<tr>
<td>-..--</td>
<td>*</td>
</tr>
<tr>
<td>..--</td>
<td>Space</td>
</tr>
<tr>
<td>.-.-</td>
<td>Enter</td>
</tr>
<tr>
<td>--</td>
<td>Backspace</td>
</tr>
<tr>
<td>--...-</td>
<td>Shift</td>
</tr>
<tr>
<td>-.-.</td>
<td>Ctrl</td>
</tr>
<tr>
<td>--.--</td>
<td>Alt</td>
</tr>
<tr>
<td>.-..-</td>
<td>ArrowUp</td>
</tr>
<tr>
<td>.--..</td>
<td>ArrowDown</td>
</tr>
<tr>
<td>.-.-..</td>
<td>ArrowLeft</td>
</tr>
<tr>
<td>.-.-.</td>
<td>ArrowRight</td>
</tr>
<tr>
<td>.....-</td>
<td>PgUp</td>
</tr>
<tr>
<td>...-..</td>
<td>PgDown</td>
</tr>
<tr>
<td>.......</td>
<td>Home</td>
</tr>
<tr>
<td>...-...</td>
<td>End</td>
</tr>
<tr>
<td>---...-</td>
<td>NumLock</td>
</tr>
<tr>
<td>--.-..</td>
<td>ScrollLock</td>
</tr>
<tr>
<td>-----.</td>
<td>CapsLock</td>
</tr>
<tr>
<td>--....</td>
<td>ESC</td>
</tr>
<tr>
<td>-.-..</td>
<td>Insert</td>
</tr>
<tr>
<td>-.--..</td>
<td>Delete</td>
</tr>
<tr>
<td>--.--.</td>
<td>PrtScn</td>
</tr>
</table> 

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
