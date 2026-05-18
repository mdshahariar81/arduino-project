# Temperature Alarm System 🌡️🚨

An Arduino-based temperature monitoring and alert system using the DHT11 sensor.

## Components Used

- Arduino UNO
- DHT11 Temperature Sensor
- LED
- Buzzer
- Resistor
- Jumper Wires
- Breadboard

## Connections

### DHT11 Sensor
- S / OUT → Pin 2
- + → 5V
- - → GND

### LED
- Long leg (+) → Pin 10 (through resistor)
- Short leg (-) → GND

### Buzzer
- + → Pin 8
- - → GND

## How it Works

- Reads temperature using DHT11
- Displays temperature in Serial Monitor
- If temperature becomes higher than 30°C:
  - LED turns ON
  - Buzzer starts beeping
- If temperature is below 30°C:
  - LED and buzzer stay OFF

## Features

✅ Real-time temperature monitoring  
✅ Serial Monitor output  
✅ LED alert system  
✅ Buzzer alarm system
