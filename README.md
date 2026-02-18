
# 🌍 Portable Air Monitoring System  
## Using Arduino Uno  

---

## 📌 Project Overview

The **Portable Air Monitoring System** is an embedded system designed to measure and monitor real-time air quality parameters using an Arduino Uno. The system collects environmental data such as temperature, humidity, particulate matter, and carbon monoxide levels to determine overall air quality and AQI status.

This project aims to provide a low-cost, portable, and efficient air pollution monitoring solution suitable for indoor and outdoor environments.

---

## 🎯 Objectives

- Monitor real-time air quality parameters  
- Detect harmful gases and particulate matter  
- Calculate Air Quality Index (AQI)  
- Provide early warning for unhealthy air conditions  
- Enable future IoT cloud integration  

---

## 🛠 Hardware Components Used

- Arduino Uno  
- DHT22 – Temperature & Humidity Sensor  
- MQ7 – Carbon Monoxide Sensor  
- PMS5003 – PM1.0, PM2.5, PM10 Sensor  
- Power Supply / Battery  
- Jumper Wires  
- Breadboard  
- Optional LCD Display  

---

## 🔌 Pin Connections

### 📍 DHT22
VCC  → 5V  
GND  → GND  
DATA → Pin 2  

### 📍 MQ7
VCC  → 5V  
GND  → GND  
AOUT → A0  

### 📍 PMS5003
VCC → 5V  
GND → GND  
TX  → Pin 10  
RX  → Pin 11  

---

## ⚙ Working Principle

1. DHT22 measures temperature and humidity.  
2. MQ7 detects Carbon Monoxide levels.  
3. PMS5003 measures particulate matter (PM1.0, PM2.5, PM10).  
4. Arduino processes sensor data.  
5. AQI status is calculated based on PM2.5 concentration.  
6. Data is displayed on Serial Monitor (can be extended to LCD/IoT).  

The system updates every 5 seconds.

---

## 📊 AQI Classification

| PM2.5 (µg/m³) | AQI Status |
|---------------|------------|
| 0 – 50        | Good       |
| 51 – 100      | Moderate   |
| 101 – 200     | Unhealthy  |
| > 200         | Hazardous  |

---

## 📸 Project Images

### 🔹 Hardware Setup


![Hardware Setup](Screenshot%20(13).png)


---

### 🔹 Final Setup

![Hardware Setup](img.jpeg)


---

## 🎥 Project Demo Video

### Option 1: YouTube Video

Upload video to YouTube and add link:

[▶ Watch Demo Video](https://youtube.com/your-video-link)

---

## 💻 Software Used

- Arduino IDE  
- Embedded C Programming  
- Serial Monitor  

---

## 🚀 How to Run the Project

1. Install Arduino IDE  
2. Install DHT Sensor Library  
3. Connect all sensors properly  
4. Upload `air_monitor.ino`  
5. Open Serial Monitor (9600 baud rate)  

---

## 📦 Project Structure

arduino-portable-air-monitoring-system/
│
├── air_monitor.ino
├── README.md
└── images/
    ├── hardware_setup.jpg
    ├── circuit_diagram.png
    └── demo_thumbnail.png

---

## 🌐 Future Enhancements

- ESP8266 WiFi Cloud Integration  
- ThingSpeak / Blynk Monitoring  
- Mobile App Interface  
- LCD/OLED Display  
- Data Logging to SD Card  
- AI-based Air Quality Prediction  

---

## 📚 Applications

- Smart Homes  
- Smart Cities  
- Industrial Safety  
- Environmental Monitoring  
- Health Monitoring Systems  

---

## 🏁 Conclusion

This Portable Air Monitoring System provides a reliable and cost-effective solution for monitoring environmental air quality. Using Arduino Uno and multiple sensors, the system enables real-time pollution tracking and AQI classification, making it suitable for academic, research, and industrial applications.

---

## 👨‍💻 Author

Rudrarapu Sathvik
Jyothishmathi Institute Of Technology and Science
CSE
3rd year
