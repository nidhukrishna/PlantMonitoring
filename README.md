Smart Plant Monitoring System (IoT Terrarium)

This project is an IoT-based smart terrarium that monitors and manages key environmental factors essential for plant health. 
It uses sensors to automate lighting, humidity, and soil moisture alerts, making it an ideal system for indoor gardening, greenhouses and potential growth for large scale agriculture.

---


## Hardware Components

| Component              | Purpose                            |
|------------------------|------------------------------------|
| DHT11 Sensor           | Measures humidity (and temperature)|
| LDR Sensor             | Detects ambient light              |
| Soil Moisture Sensor   | Monitors soil wetness              |
| Relay Module (2x)      | Switches for light & humidifier    |
| Buzzer                 | Alerts when soil is dry            |
| 9V Batteries (2x)      | Power source                       |
| Arduino UNO)           | Controls the system                |

---

## How It Works

1. **LDR Sensor** monitors light levels and turns on a grow light when it's dark.
2. **DHT11 Sensor** checks humidity; if it's too low, the humidifier is triggered.
3. **Soil Moisture Sensor** constantly monitors soil wetness; if too dry, the buzzer sounds.
4. All logic is handled by the Arduino UNO and relays to control devices.

---

## Arduino Code

The Arduino sketch (`IOT.ino`) reads sensor data, applies thresholds, and controls the buzzer and relays accordingly.

> Note: You must install the `DHT sensor library` from the Arduino Library Manager.

---

## Demo


[![Watch the demo](https://drive.google.com/file/d/16FGrRylNpr_pgwCKmFDkWVvHP1f1Q8Ho/view?usp=sharing)

---


## 🙌 Authors

- **Nidhukrishna** – Developer & Documenter  
- [Your teammates here, if any]

