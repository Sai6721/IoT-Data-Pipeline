#include <WiFi.h>

const char* ssid = "YourWiFiName";
const char* password = "YourWiFiPassword";

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }

  Serial.println("WiFi Connected");
}

void loop() {

  // Read temperature from analog pin
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (3.3 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100;

  WiFiClient client;

  if (client.connect("io.adafruit.com", 80)) {

    String url = "/api/v2/YourAdafruitUsername/feeds/temperature/data";
    String data = "value=" + String(temperatureC);

    client.println("POST " + url + " HTTP/1.1");
    client.println("Host: io.adafruit.com");
    client.println("X-AIO-Key: YourAdafruitKey");
    client.println("Content-Type: application/x-www-form-urlencoded");
    client.print("Content-Length: ");
    client.println(data.length());
    client.println();
    client.println(data);
  }

  delay(30000);
}