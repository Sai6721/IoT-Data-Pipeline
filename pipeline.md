# Data Pipeline

## Flow

Temperature Sensor
↓
ESP32
↓
WiFi Network
↓
HTTP POST Request
↓
Adafruit IO Cloud
↓
Dashboard Graph

## Working

1. Read the temperature from the sensor.
2. Connect ESP32 to the WiFi network.
3. Create an HTTP POST request.
4. Send the temperature value to Adafruit IO.
5. Store and display the data on the dashboard.
6. Repeat every 30 seconds.

## Platform

- Adafruit IO

## Protocol

- HTTP POST

## Benefits

- Real-time monitoring
- Cloud storage
- Data visualization
- Remote access