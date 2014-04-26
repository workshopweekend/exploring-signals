int ledPin = 11;
int sensorInput = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(A0);

  digitalWrite(ledPin, HIGH);
}