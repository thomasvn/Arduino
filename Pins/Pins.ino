void clearPins() {
  int i;
  for (i = 2; i <= 13; i++) {
    digitalWrite(i, LOW);
  }  
}

void checkDigital() {
  int i;
  for (i = 2; i <= 13; i++) {
    digitalWrite(i, HIGH);
  }
}

void checkAnalog() {
  analogWrite(3, 100);
  analogWrite(5, 100);
  analogWrite(6, 100);
  analogWrite(9, 100);
  analogWrite(10, 100);
  analogWrite(11, 100);
}

void setup() {
  Serial.begin(9600); // bits per sec
  
  int i;
  for (i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

  Serial.println("Enter 'a' to select analog.\nEnter 'd' to select digital.\nEnter 'c' to clear pins");
}

void loop() {
  if (Serial.available()) {
    char message = Serial.read();
    switch(message) {
      case 'a':
        checkAnalog();
        Serial.println("You have selected analog");
        break;
      case 'd':
        checkDigital();
        Serial.println("You have selected digital");
        break;
      case 'c':
        clearPins();
        Serial.println("You have cleared the pins");
        break;
      default:
        Serial.println("You did not select between 'a', 'd', or 'c'");
        break;
    }
  }
}
