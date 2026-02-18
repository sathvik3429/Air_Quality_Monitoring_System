
# Arduino Portable Air Monitoring System

## Overview
This project monitors air quality using:
- DHT22 (Temperature & Humidity)
- MQ7 (CO Gas Sensor)
- PMS5003 (PM1.0, PM2.5, PM10)

## Board Used
Arduino Uno

## Pin Connections

DHT22:
- VCC -> 5V
- GND -> GND
- DATA -> Pin 2

MQ7:
- VCC -> 5V
- GND -> GND
- AOUT -> A0

PMS5003:
- VCC -> 5V
- GND -> GND
- TX -> Pin 10
- RX -> Pin 11

## How to Run
1. Install DHT library in Arduino IDE
2. Open air_monitor.ino
3. Upload to Arduino Uno
4. Open Serial Monitor (9600 baud)
