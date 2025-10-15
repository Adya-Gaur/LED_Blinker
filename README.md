# 🔆 Arduino Project: LED Blinker (Example)

## 🧩 Overview
This project is a simple Arduino program that blinks an **external LED** connected to **pin 7**.  
It helped me understand basic Arduino concepts like `setup()`, `loop()`, `pinMode()`, `digitalWrite()`, and **GND connections**.

---

## ⚙️ Components Used
- Arduino Uno (or compatible board)  
- 1 LED (any color)  
- 220Ω resistor  
- Breadboard and jumper wires  

---

## 🔌 Circuit Connection
- **Pin 7** → LED long leg (anode)  
- **LED short leg (cathode)** → 220Ω resistor → **GND**  
- Circuit flow: `Pin 7 → LED → resistor → GND`

---

## 💻 Code
```cpp
int ledPin = 7;  // LED connected to pin 7

void setup() {
  pinMode(ledPin, OUTPUT);  // configure pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // turn LED on
  delay(400);                  // wait 400 ms
  digitalWrite(ledPin, LOW);   // turn LED off
  delay(400);                  // wait 400 ms
}
