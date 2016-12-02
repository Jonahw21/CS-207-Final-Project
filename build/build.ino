/*
This is the completed sketch for a basic version of this project using the tone function.
It does not involve the SD card module and consists of 8 buttons and a speaker for hardware.
Pins 6 - 13 are connected to each of the buttons. The speaker is connected to pin 3.
There is a circuit diagram in the img folder displaying the wiring.
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

int offset = 7; //initial offset
int offsetCurrentState = 0; //Used to detect button presses and releases
int offsetLastState = 0;

//Below is an array of notes for the tone function.
//It is split into sets of 7 tones to be mapped to 7 of the buttons
//When the 8th button is pressed it changes an offset variable to play
//another set of 7 notes.
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
  if(offsetLastState == LOW && offsetCurrentState == HIGH)  //If the offset button has been pressed
    offset += 7;  //increment the offset by 7 to access next set of notes
  if(offset > 14) //Wrap offset around to 0
    offset = 0;

    noTone(speakerPin); //Mute speaker when no button is pressed
      
  //While each specified button is held a tone from the array will be played
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
