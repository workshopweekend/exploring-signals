int ledPin = 11;
int sensorInput = A0;

boolean ledIsOn = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(A0);
  
  if (ledIsOn) {
    if (lightLevel > 600) {
      ledIsOn = false;
    }
  } else {
    if (lightLevel < 400) {
      ledIsOn = true;
    }
  }

  digitalWrite(ledPin, ledIsOn);
 
  Serial.println(lightLevel);
}