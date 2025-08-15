# 🔥 LPG Gas Leakage Detector – IoT & Simulation Project

## 📌 Project Overview
This project is an **IoT-based LPG Gas Leakage Detector** built using **Arduino Uno**, an **MQ-2 gas sensor**, and simulated using **Proteus**.  
The system detects dangerous LPG levels and triggers **visual (LED)** and **audible (buzzer)** alerts, helping prevent accidents in kitchens, industries, and storage facilities.

## 🛠 Features
- Real-time LPG gas detection using MQ-2 sensor.
- Activates a buzzer and LED alarm when gas level exceeds a set threshold.
- Arduino Uno processes sensor data and controls alerts.
- Simulated using **Proteus** and implemented with **Arduino IDE**.
- Documentation and circuit diagrams included.

## 📂 Project Structure
IOT_Project/
│-- LPG_Gas_Leakage_Detector.ino # Arduino source code
│-- LPG_Gas_Leakage_Detector.pdsprj # Proteus simulation project
│-- LPG_Gas_Leakage_Detector.pdf # Project Diagram (PDF)
│-- Project Backups/ # Proteus backup files
│-- README.md # Project documentation


## 🖥 Hardware Components
- Arduino Uno
- MQ-2 Gas Sensor
- Buzzer
- LED (Red & Green)
- LCD Display with I2C Module
- Resistors
- Breadboard
- Jumper wires
- (Optional) Wi-Fi Module for IoT notifications

## 🔧 How It Works
1. The **MQ-2 Gas Sensor** monitors LPG concentration continuously.
2. When the concentration exceeds a set threshold:
   - The **buzzer** is activated.
   - The **LED** turns ON.
   - The LCD shows an alert message.
3. Once the gas level returns to safe levels, the alarm stops.

## 🚀 How to Run
### **Arduino IDE**
1. Install [Arduino IDE](https://www.arduino.cc/en/software).
2. Open `LPG_Gas_Leakage_Detector.ino`.
3. Connect Arduino via USB and select the correct **COM port**.
4. Upload the code.

### **Proteus Simulation**
1. Open `LPG_Gas_Leakage_Detector.pdsprj` in **Proteus**.
2. Load the compiled Arduino `.hex` file.
3. Run the simulation and observe sensor-triggered alerts.


