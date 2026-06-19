# IoT-Data-Pipeline
# IoT Task 4 – Building a Data Pipeline

## Project Overview

This project demonstrates how an ESP32 reads temperature data from a sensor and sends it to the Adafruit IO cloud platform using an HTTP POST request. The uploaded data can be visualized on an Adafruit IO dashboard.

## Objective

- Read temperature from a sensor.
- Connect ESP32 to WiFi.
- Send sensor data to Adafruit IO.
- Store and visualize data on the cloud.

## Hardware Required

- ESP32 Development Board
- TMP36 Temperature Sensor
- Breadboard
- Jumper Wires
- USB Cable

## Software Required

- Arduino IDE
- Adafruit IO Account

## Features

- Reads temperature from an analog sensor.
- Connects to WiFi.
- Sends data to Adafruit IO using HTTP POST.
- Updates cloud dashboard automatically.

## Expected Output

Temperature values are uploaded to Adafruit IO every 30 seconds and displayed on the dashboard.

## Project Structure

```
IoT-Data-Pipeline/
│── README.md
│── pipeline.md
│── data_pipeline.ino
└── screenshots/
```

## Learning Outcomes

- Cloud connectivity using ESP32.
- HTTP POST communication.
- IoT data pipeline.
- Cloud data visualization.

## Author

SoftNexis Internship – IoT Task 4