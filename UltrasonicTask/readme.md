# 🚀 Arduino + Servo + Ultrasonic Sensor Project

This project demonstrates how to control a **servo motor** using an **HC-SR04 ultrasonic sensor** with Arduino.

<img width="482" height="283" alt="image" src="https://github.com/user-attachments/assets/c47e1bdc-1646-4d6e-af96-efe20637618c" />

---

## ⚙️ Components Used

- Arduino (UNO / Mega)
- HC-SR04 Ultrasonic Sensor
- Servo Motor (SG90 or similar)
- LED (optional)
- 220Ω Resistor (for LED)
- Breadboard & Jumper Wires

---

## 🔌 Hardware Pinout

### 📡 Ultrasonic Sensor (HC-SR04)

| HC-SR04 Pin | Arduino Pin |
|------------|------------|
| VCC        | 5V         |
| GND        | GND        |
| TRIG       | D9         |
| ECHO       | D10        |

---

### ⚙️ Servo Motor

| Servo Wire | Arduino Pin |
|-----------|------------|
| VCC (Red) | 5V         |
| GND (Brown/Black) | GND |
| Signal (Yellow/Orange) | D6 |

---

### 💡 LED

| LED Pin | Arduino Pin |
|--------|------------|
| Anode (+) | D7 (via 220Ω resistor) |
| Cathode (-) | GND |

---

## 🧠 How It Works

1. The ultrasonic sensor measures the distance to an object.
2. If the distance is **≤ 10 cm**:
   - Servo rotates to **90°**
   - LED turns ON
3. If the distance is **> 10 cm**:
   - Servo returns to **0°**
   - LED turns OFF

---
🔗 **[Tinkercad Link](https://www.tinkercad.com/things/2T3PxXe9Bd5-electronicstask)**
## 🎥 Project Demonstration Video
[Click here to watch the Project Demonstration Video](https://github.com/s1lvrz/ElectronicsTasks/blob/main/UltrasonicTask/ultrasonic.mp4)
