# Soil Moisture Alarm System 🌱🚨

An Arduino-based soil moisture monitoring and alert system.

## Components Used

- Arduino UNO
- HW-080 Soil Moisture Sensor
- Soil Moisture Module
- LED
- Buzzer
- Resistor
- Breadboard
- Jumper Wires

## Connections

### Soil Moisture Module
- VCC → 5V
- GND → GND
- AO → A0
- DO → Not Used

### LED
- Long leg (+) → Pin 10 (through resistor)
- Short leg (-) → GND

### Buzzer
- + → Pin 8
- - → GND

## How It Works

- Reads soil moisture values from the sensor
- Displays sensor values in Serial Monitor
- If soil becomes dry:
  - LED turns ON
  - Buzzer starts beeping
- If soil moisture increases:
  - LED turns OFF
  - Buzzer stops

## Features

✅ Real-time soil monitoring  
✅ Serial Monitor output  
✅ LED alert system  
✅ Buzzer alarm system  

## Future Improvements

- Add LCD display
- Add mobile notifications
- Add automatic water pump system
