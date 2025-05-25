# IOT-BASED-SMART-AGRICULTURE-USING-LEARNING-ALGORITHMS
# Smart Irrigation and Animal Detection System

## Overview

This project is a smart agriculture system that integrates automatic irrigation with animal detection using image classification. It utilizes various sensors, a camera module, and cloud connectivity to monitor and control the irrigation process while also identifying animals that may pose threats to the crops.

## System Components

### 1.📦 Components Used

- ESP8266 NodeMCU
- ESP32 Controller
- Arduino Board
- DHT11 Temperature & Humidity Sensor
- Soil Moisture Sensor
- Relay Module (to control motor/pump)
- Water Pump or Motor
- Jumper Wires
- Power Source

### 2. Camera
- **OV2640 Camera Module**: Captures images for animal detection.

### 4. Block Diagram:
![Image](https://github.com/user-attachments/assets/e5730521-2464-4414-9520-1bb952afbf19)
![Image](https://github.com/user-attachments/assets/aac9384d-3f23-4b5b-a8d7-ddbb6fc21062)
### 5. Software & Cloud
- **Thingspeak Cloud**: Receives and stores sensor data for monitoring and visualization.
- **Twilio (SMS)**: Use Twilio to send SMS alerts.
- **Mobile Device Interface**: Allows remote monitoring and alerts.
- **Multiclass Image Classification Algorithm**: Detects and classifies animals using images captured by the camera.

## Functional Workflow

1. **Data Collection**:
   - The Arduino board collects environmental data from sensors.
   - The ESP32 controller captures images through the OV2640 camera.

2. **Data Processing**:
   - Image data is analyzed using a machine learning-based image classification model to detect animals.
   - Sensor readings are used to determine irrigation needs.

3. **Actuation**:
   - Based on processed data, relays control the motor pump and sprinkler system.
   - Alerts are sent to the mobile device if an animal is detected.

4. **Cloud Integration**:
   - NodeMCU sends data to Thingspeak Cloud.
   - The mobile device retrieves real-time updates from the cloud and animal detection system.

## Data On Thingspeak 
![Image](https://github.com/user-attachments/assets/2c476826-ee08-4209-bc79-2294c3813151)
![Image](https://github.com/user-attachments/assets/6bd13da0-50d5-4d06-b154-5f4e218da6bc)

## Animal Detection Output
![Image](https://github.com/user-attachments/assets/07cbd1fb-c727-4443-84bc-14d791bc15f8)
## Features

- Autonomous irrigation control.
- Real-time animal detection using machine learning.
- Remote monitoring via mobile device.
- Cloud-based data storage and analytics (via Thingspeak).

## Future Enhancements

- Integration with voice-controlled assistants (e.g., Alexa, Google Assistant).
- Advanced image classification for more accurate animal identification.
- Weather prediction-based irrigation scheduling.

## License

This project is licensed under the MIT License.

---
