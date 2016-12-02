/*
header
*/
int button1 = 13;
int button2 = 12;
int button3 = 11;
int button4 = 10;
int button5 = 9;
int button6 = 8;
int button7 = 7;
int offsetButton = 6;
int speakerPin = 3;

int offset = 7;
int offsetCurrentState = 0;
int offsetLastState = 0;

int notes[21] = { 65, 73, 82, 87, 98, 110, 123, //First 7 notes
262, 294, 330, 349, 392, 440, 494, //2nd set of seven
1047, 1175, 1319, 1397, 1568, 1760, 1976, //3rd set of 7
  };

void setup() {
  // put your setup code here, to run once:
pinMode(button1, INPUT);
pinMode(button2, INPUT);
pinMode(button3, INPUT);
pinMode(button4, INPUT);
pinMode(button5, INPUT);
pinMode(button6, INPUT);
pinMode(button7, INPUT);
pinMode(offsetButton, INPUT);
pinMode(speakerPin, OUTPUT);



 
}

void loop() {
  // put your main code here, to run repeatedly:
  offsetLastState = offsetCurrentState;
  offsetCurrentState = digitalRead(offsetButton);
  if(offsetLastState == LOW && offsetCurrentState == HIGH)
    offset += 7;
  if(offset > 14)
    offset = 0;

    noTone(speakerPin);
    
  while(digitalRead(button1) == HIGH)
  {
    tone(speakerPin, notes[offset]);
  }

    while(digitalRead(button2) == HIGH)
  {
    tone(speakerPin, notes[offset + 1]);
  }

    while(digitalRead(button3) == HIGH)
  {
    tone(speakerPin, notes[offset + 2]);
  }

    while(digitalRead(button4) == HIGH)
  {
    tone(speakerPin, notes[offset + 3]);
  }

    while(digitalRead(button5) == HIGH)
  {
    tone(speakerPin, notes[offset + 4]);
  }

    while(digitalRead(button6) == HIGH)
  {
    tone(speakerPin, notes[offset + 5]);
  }

    while(digitalRead(button7) == HIGH)
  {
    tone(speakerPin, notes[offset + 6]);
  }

  noTone(speakerPin);

}
