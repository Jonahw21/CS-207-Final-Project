# CS-207-Final-Project
Everything pertaining to my final project, a button controlled interactive instrument.

I have completed a basic version of this project implementing a set of 8 arcade buttons, the  tone function, and a basic speaker.
It produces a note while one of the buttons are held done allowing for simple melodies. Due to technical difficulties I was not able to finish what I had intended but have managed to build this much simpler version.



# Repository Contents
*  **/Testing** - Contains sketches that can be used to verify the project works at various stages.
*  **/build** - Contains the final build sketch of my "completed" project.
*  **/img** - Contains images of the project and its wiring.

# Requirements and Materials
The basic version of this project requires :
* An arduino Uno
* 8 buttons or switches
* 8 560ohm resistors
* a speaker
* 10k resistor if using a piezo speaker

Attempts at the .wav playback will also require an SD card module and a non-piezo speaker
The SD and TMRpcm libraries are used for .wav file playback

## Build Details

The largest part of this project involved soldering a set of 3 wires to each microswitch to connect them to the arduino. This has to be done for each switch so with 8 buttons in total there will be 24 wires, which can make things a bit messy. The picture below demonstrates how the wires should be connected:
![alt tag] (https://github.com/Jonahw21/CS-207-Final-Project/blob/master/img/microswitch-arduino.png)

As seen above a 5v connection is attached to the common connection on the microswitch. The normally open connection is then directly attached to the input pin on the arduino and a resistor going to ground. This sends a high voltage to the arduino when the switch is closed by pressing the button. The button_test sketch in the testing folder can be used to test that your button has been properly wire and is working.

The tone test code is meant to test out connecting a speaker to pin 9 to test audio output independent of input. The values for tone outputs are based on the infromation from https://www.arduino.cc/en/Tutorial/toneMelody where different notes are defined by different values. This can be used to ensure your speaker is properly connected and to test different tones.

Unfortunately I was unable to get an SD card module working with my project. I will go into further detail on what I had planned to do later. First I will discuss what I wound up with. The final build ended up looking like this:
![alt tag](https://github.com/Jonahw21/CS-207-Final-Project/blob/master/img/project%20Circuit%20diagram.JPG)
It uses an array to hold values of tones to be played. One of the buttons controls an offset variable which affects what values are read from the array allowing you to change the sounds the device on the fly. The other seven buttons each play a different sound when held, allowing you to determine the length of the note.

Regarding the sd card I had planned to use an external microsd card connection such as this: https://www.amazon.ca/Reader-SODIAL-Memory-Shield-Arduino/dp/B00YMJVLAS/ref=sr_1_1?ie=UTF8&qid=1477611127&sr=8-1&keywords=arduino+micro+sd
and existing libraries for external audio playback. Playback of .wav files should theoretically be possible with both the sd library and the TMRpcm library. These files are played from an sd card by passing in the name of the .wav file on the card. As such an array holding the names of several files and an offset variable could allow for several sound sets to be switched between just like the basic build of my project. Using this the plan was to use recordings of real instruments that could be played at the push of a button. Using .wav files for the up and down strums of a guitar chord would allow someone to make strumming patterns withouth needing to learning complex chord positions. The main idea was to simplify complex instruments down to single button presses.

