#include <SoftwareSerial.h>

#define rxPin 8
#define txPin 7

SoftwareSerial mySerial(txPin, rxPin);

int PotentiometerPin = A0; // select the input pin for the potentiometer
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() {
  // put your setup code here, to run once:
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
  mySerial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // read the value from the sensor:
  sensorValue = analogRead(PotentiometerPin)/4; // 8 bit
  Serial.print("Potentiometer Value: ");
  Serial.print(sensorValue);
  mySerial.println(sensorValue);
  delay(100);
}
