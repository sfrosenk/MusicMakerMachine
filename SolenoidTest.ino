const int SOLENOID = 8; //might have to change this
//might be for a teensy not an arduino


void setup() {
  // put your setup code here, to run once:
  pinMode(SOLENOID, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SOLENOID, HIGH);
  delay(20);
  digitalWrite(SOLENOID, LOW);
  delay(1000);

}
