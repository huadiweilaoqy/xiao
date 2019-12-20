
void setup() {

  // put your setup code here, to run once:
  SerialUSB.begin(115200);
  Serial1.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (SerialUSB.available() > 0)
  {
    char c = SerialUSB.read();
    Serial1.print(c);
  }
  if (Serial1.available() > 0) {
    char c = Serial1.read();
    SerialUSB.print(c);
  }

}
