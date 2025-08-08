# 🕵️ PIR Motion Sensor Smart System

A simple yet effective Arduino-based smart motion detection system. This project simulates how modern smart systems detect motion and respond with visual and audio alerts using a PIR sensor, LED, and piezo buzzer.

---

## 📝 Description

The **PIR Motion Sensor** project is a smart system that uses a Passive Infrared (PIR) sensor to detect movement in a specific area. When motion is detected, the system responds by:

- Turning on a red LED as a visual indicator.
- Activating a piezo buzzer as an audio alert.

This project simulates the basic functionality of commercial motion-sensing systems used in smart homes, security systems, and automation setups.

---

## 🔧 Components Used

| Component               | Quantity |
|-------------------------|----------|
| Arduino Uno R3          | 1        |
| PIR Motion Sensor       | 1        |
| Red LED                 | 1        |
| 220Ω Resistor           | 1        |
| Piezo Buzzer            | 1        |
| Breadboard              | 1        |
| Jumper Wires / Cables   | Several  |
| USB Cable (for programming) | 1     |

---

## 🚀 Installation & Setup

1. **Connect the PIR Motion Sensor**:
   - VCC → 5V
   - GND → GND
   - OUT → Digital Pin 2

2. **Connect the Red LED**:
   - Anode (long leg) → Digital Pin 8 (through 220Ω resistor)
   - Cathode (short leg) → GND

3. **Connect the Piezo Buzzer**:
   - Positive lead → Digital Pin 9
   - Negative lead → GND

4. **Upload the Code**:
   - Open Arduino IDE.
   - Connect your Arduino Uno via USB.
   - Upload the `.ino` sketch to the board.
   - Select the correct board and port from the Tools menu.

---

## ⚙️ How It Works

1. The PIR sensor monitors for any movement in its detection range.
2. When motion is detected:
   - The red LED turns on.
   - The piezo buzzer emits a sound.
3. After a short delay, the system resets and waits for new motion input.

This loop mimics how a real smart motion alarm system functions, providing both a visual and audio indication of activity.

---

## 📸 Images / Videos

> Add visuals to show off your project!
>
> https://sites.google.com/d/1kRYFgoPpI5KiRHlfU4u9C--i8z4OA6I5/p/1_ZLDAirpPNf5aijgyz-LQdDFrC5D1Gd2/edit

---

## 🔬 Simulation

Want to try it virtually? Use Tinkercad:

- [🔗 Tinkercad Simulation]([https://www.tinkercad.com/your-simulation-link](https://www.tinkercad.com/things/dIDWb8RGsuM-copy-of-pir-motion-sensor ))
---

## 🙌 Credits

- Developed by **[Madison Diggs]**
- Powered by **Arduino Uno R3**
- Inspired by smart home motion-detection systems

---

## 📄 License

This project is open-source under the Code in Schools.

---
