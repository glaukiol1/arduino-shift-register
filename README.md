# Arduino with Shift Register

Use a Shift Register (the exact model: 74hc595) with Arduino. The code includes helpful functions to simply interact with a shift register.

## Seting Up

- Connect the clock pin (Digital Pin 11 on the Arduino) to the 3rd pin on the bottom of the shift register.
- Connect the data pin (Digital Pin 12 on the Arduino) to the 6th pin on the bottom of the shift register.
- Connect the latch pin (Digital Pin 10 on the Arduino) to the 4th pin on the bottom of the shift register.
- Connect the 5V pin of the Arduino to the 2nd pin on the bottom of the shift register.
- Connect one of the ground (GND) pins of the Arduino to the 5th pin on the bottom of the shift register.
- Connect another 5V that comes from the Arduino to the last pin on the bottom of the shift register (8th).
- Connect one of the ground (GND) pins of the Arduino to the first pin on the top of the shift register.
- The shift registers outputs are (7th bottom pin, 2-8 pin on the top).

**NOTE**: This exact layout **may** only apply to the 74HC595 shift register.

The code also includes the **shiftWrite(int,int)**, **setBin(byte)**, **refreshShift()**.


## Functions

### refreshShift()
Refreshes the shift register with the updated bytes (**byte bin** variable).

### setBin(byte)
Set a new binary value from 0b00000000 to 0b10000000 (inclusive).

### shiftWrite(int,int)
**Param 1**: Pin on the shift register (0-7). Layout of shift register pins:
<br/>
- Pin 0: Pin 7 on the bottom of the shift register.
- Pin 1: Pin 2 on the top of the shift register.
- Pin 2: Pin 3 on the top of the shift register.
- Pin 3: Pin 4 on the top of the shift register.
- Pin 4: Pin 5 on the top of the shift register.
- Pin 5: Pin 6 on the top of the shift register.
- Pin 6: Pin 7 on the top of the shift register.
- Pin 7: Pin 8 on the top of the shift register.

**Param 2**: Value of that pin (0 or 1)
- 0 = LOW
- 1 = HIGH
