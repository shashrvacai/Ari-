int D = 0 ;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}

void loop() {
  digitalWrite(9, HIGH);
  delayMicroseconds(25);
  digitalWrite(9, LOW);
  delayMicroseconds(50);
  D++ ;

  if (D == 12000) {
    if (digitalRead(8) == LOW) {
      digitalWrite(8, HIGH);
    }
    else {
      digitalWrite(8, LOW);
    }

    D= 0;
    
  }
}
