const int ledPin = 13;
const int motionPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(motionPin, INPUT);
}

void loop() {
  int motion = digitalRead(motionPin);
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
