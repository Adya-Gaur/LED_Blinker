# Arduino Project: LED Blinker 

## Overview
This project is my first step into Arduino programming. It demonstrates basic control of LEDs using digital pins, timing functions, and control loops. This project helped me build a solid foundation in Arduino programming and hardware logic, preparing me for more advanced robotics projects.

---

## Components Used
- Arduino Uno  
- 1 LED 
- 220Ω resistor  
- Breadboard
- Jumper wires  

---

## Circuit Connection
- **Pin 7** → LED long leg (anode)  
- **LED short leg (cathode)** → 220Ω resistor → **GND**  
- Circuit flow: `Pin 7 → LED → resistor → GND`

---

## Concepts Learned
- Digital output using `digitalWrite()`
- Timing using `delay()`
- Using loops (`for, while`) for repeating and stopping patterns
- Setting up - initializing pins with `pinMode()`
- Difference in usage of external and builtin LED
- Significance of and difference between `void setup()` and `void loop()`
- Handling of electronic hardware

---

## Project

### Default
The LED blinks ON and OFF every 1 second.
[YouTube Demo](https://www.youtube.com)

### Modifications 
1. **Pattern Blinker** - LED blinks 5 times (0.5s each), stays ON for 3s, OFF for 2s, and then repeats.
   [YouTube Demo](https://www.youtube.com)

2. **Blink then stop** - LED blinks 5 times (1s each), and then stops permanently using while(true)
   [YouTube Demo](https://www.youtube.com)

3. **External LED Setup** - Used a physical LED connected via resistor to pin 7
   [YouTube Demo](https://www.youtube.com)

---
