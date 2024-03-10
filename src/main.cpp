#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  double value = analogRead(A0);
  double voltage = value * 5.0/1024;
  Serial.print("Voltage = ");
  Serial.println(voltage);
  //Serial.println(value);
  delay(1);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}