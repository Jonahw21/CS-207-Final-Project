void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

tone(9, 523); //C
delay(500);
tone(9, 587); //D
delay(500);
tone(9, 659); //E
delay(500);
tone(9, 698); //F
delay(500);
tone(9, 784); //G
delay(500);
tone(9, 880); //A
delay(500);
tone(9, 988); //B
delay(500);
tone(9, 0);
delay(500);
}
