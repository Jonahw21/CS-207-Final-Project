void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int t = 400;
int r = 10;
//tone(9, 523); //C
//delay(t);
//tone(9, 587); //D
//delay(t);
//tone(9, 659); //E
//delay(t);
//tone(9, 698); //F
//delay(t);
//tone(9, 784); //G
//delay(t);
//tone(9, 880); //A
//delay(t);
//tone(9, 988); //B
//delay(t);
//tone(9, 0);
//delay(t);



tone(9, 659); //E
delay(t);
tone(9, 0);
delay(r);
tone(9, 659); //E
delay(t);
tone(9, 0);
delay(r);
tone(9, 698); //F
delay(t);
tone(9, 0);
delay(r);
tone(9, 784); //G
delay(t);
tone(9, 0);
delay(r);
tone(9, 784); //G
delay(t);
tone(9, 0);
delay(r);
tone(9, 698); //F
delay(t);
tone(9, 0);
delay(r);
tone(9, 659); //E
delay(t);
tone(9, 0);
delay(r);
tone(9, 587); //D
delay(t);
tone(9, 0);
delay(r);
tone(9, 523); //C
delay(t);
tone(9, 0);
delay(r);
tone(9, 523); //C
delay(t);
tone(9, 0);
delay(r);
tone(9, 587); //D
delay(t);
tone(9, 0);
delay(r);
tone(9, 659); //E
delay(t);
tone(9, 0);
delay(r);
tone(9, 659); //E
delay(1.5 * t);
tone(9, 0);
delay(r);
tone(9, 587); //D
delay(t / 2);
tone(9, 0);
delay (r);
tone(9, 587); //D
delay(2 * t);
tone(9, 0);
delay(100 * r);

}
