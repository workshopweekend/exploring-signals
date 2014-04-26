int greenPin = 4;
int yellowPin = 5;
int redPin = 6;

int greenPin2 = 9;
int yellowPin2 = 10;
int redPin2 = 11;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);

  pinMode(greenPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(redPin2, OUTPUT);
}

void loop() {
  // start green for first signal.
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(10000);
  
  // go to yellow and red for first signal.
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(3600);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(2000);

  // green on second signal.
  digitalWrite(redPin2, LOW);
  digitalWrite(greenPin2, HIGH);
  delay(10000);
  
  // go to yellow and red for second signal.
  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, HIGH);
  delay(3600);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, HIGH);
  delay(2000);
}