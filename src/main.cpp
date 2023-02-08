#include <Arduino.h>

const int SensorPin=14;

void setup() { 
  Serial.begin(9600);
  pinMode(SensorPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(SensorPin);
  int humedad = ( 100 - ( (sensorValue/4095.00) * 100 ) );
  Serial.print(humedad);
  Serial.println("%");
  Serial.println(sensorValue);
  delay(2000);
}