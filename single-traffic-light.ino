int greenPin = 4;
int yellowPin = 5;
int redPin = 6;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  digitalWrite(greenPin, HIGH);
  delay(10000);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(3600);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(30000);
  digitalWrite(redPin, LOW);
}