void setup() {
  // put your setup code here, to run once:
  // Parameters: Transmission Rate (BAUD or bits/sec),
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  if (Serial.available()) {
    char letter = Serial.read();

    switch(letter) {
      case 'o':
        Serial.println("You typed in o");
        break;
      case 'p':
        Serial.println("You typed in p");
        break;
    }
  }

  // Serial.write() ... 
  // Serial.available() .... tells us if bytes are waiting in the buffer that the Arduino can read from
  // Serial.read() ... reads letters from the buffer
}
