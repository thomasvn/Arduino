void setup() {
  Serial.begin(9600);
  Serial.println("Choose between Analog pins 0-5");
}

void loop() {
  int distance;

  if (Serial.available()) {
    int pin = Serial.read();

    if (pin >= -1 && pin <= 5) {
      distance = analogRead(pin);
      Serial.println(distance);
    }
    else {
      Serial.println("You did not enter a number between 0-5");
    }
  }
}
