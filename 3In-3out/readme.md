## Task Overview

This project demonstrates how to use an **Arduino** to control **three LEDs** based on input from **three push buttons**. Each button corresponds to one LED, turning it on when pressed and off when released.

<img width="406" height="338" alt="image" src="https://github.com/user-attachments/assets/23442e70-2b84-406c-af8a-b3e0e3728157" />

## 📌 Pinout Connection Table

| Component | Arduino Pin | Description |
| :--- | :--- | :--- |
| **LED 1** | Pin 5 | Output LED controlled by Button connected to Pin 2 |
| **LED 2** | Pin 6 | Output LED controlled by Button connected to Pin 3 |
| **LED 3** | Pin 7 | Output LED controlled by Button connected to Pin 4 |
| **Button 1** | Pin 2 | Pushbutton connected between Pin 2 and GND |
| **Button 2** | Pin 3 | Pushbutton connected between Pin 3 and GND |
| **Button 3** | Pin 4 | Pushbutton connected between Pin 4 and GND |

---

## ⚙️ How Pull-Up / Pull-Down Works in This Code

### 1. Understanding Pull-Up Resistors
When using digital input pins on a microcontroller, a pin cannot be left "floating" (unconnected electrically) because it will pick up electrical noise from the environment, leading to erratic readings. 
* A **Pull-Up** resistor pulls the input pin voltage **HIGH** ($V_{CC}$) by default.
* When a button is pressed, it connects the pin directly to **GND** (Ground), pulling the voltage **LOW**.

### 2. Implementation in the Code
In this project, the internal pull-up resistors of the Arduino are activated through software:
1. `pinMode(buttons[i], INPUT);` sets the pin as an input.
2. `digitalWrite(2, HIGH);` (and pins 3, 4) explicitly enables the **internal pull-up resistors** built into the ATmega microcontroller.

### 3. Logic Behavior
* **Button Released:** The pin reads **`HIGH`** due to the internal pull-up resistor.
* **Button Pressed:** The circuit is completed to ground, so the pin reads **`LOW`**.

This is why the `loop()` function checks for `LOW` states (`digitalRead(...) == LOW`) to turn the respective LEDs on:
```cpp
if(digitalRead(4) == LOW)
    digitalWrite(7, HIGH); // Turn LED on when button is pressed
else 
    digitalWrite(7, LOW);  // Turn LED off when button is released
```

🔗 **[Tinkercad Link](https://www.tinkercad.com/things/cUeeW9PEIVM-3in-3out)**

## 🎥 Project Demonstration Video
[Click here to watch the Project Demonstration Video](https://github.com/s1lvrz/ElectronicsTasks/blob/main/3In-3out/video.mp4)
