#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  mySerial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (mySerial.available()) {
    char c = mySerial.read();
    Serial.print(c);
  }
  if (Serial.available()) {
    char d = Serial.read();
    mySerial.print(d);
  }
}
