//This code is meant to test a multi microswitch setup.
//It has a microswitch connected to pins 9 and 10 on the
//arduino as inputs. The microswitch has 3 connections:
//NC(normally closed), NO(normally open), and COM(sommon)
//First connect 5V to the common connection,
//Then connect NO to a 560ohm resistor that goes to ground
//Also connect one of the arduino pins to NO
//It will read 0 when the switch is not pressed and 1 when it is
//
//Jonah Wrubleski
//CS 207 Final Project Testing


void setup() {
  // put your setup code here, to run once:
pinMode(9, INPUT);
pinMode(10, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("9: ");
  Serial.println( digitalRead(9));
  Serial.print("10: ");
  Serial.println( digitalRead(10));
  Serial.println();
  delay(1000);
}
