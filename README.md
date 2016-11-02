# CS-207-Final-Project
Everything pertaining to my final project, a button controlled interactive instrument.

Currently I am working on testing and setting up the basics. Right now that involves setting up the microswitches and arcade buttons
to work with my arduino Uno. The test sketch "button test" details how to connect two microswitches to the arduino and verify that they
work. This basic idea will be replicated to attach numerous buttons to the arduino. Next will be setting each button input to correspond to a different audio output.

The tone test code is meant to test out connecting a speaker to pin 9 to test audio output independent of input. The values for tone outputs are based on the infromation from https://www.arduino.cc/en/Tutorial/toneMelody where different notes are defined by different values. Next will be testing making a song from these notes and connecting them to inputs (the buttons).

Using an external microsd card connection such as this: https://www.amazon.ca/Reader-SODIAL-Memory-Shield-Arduino/dp/B00YMJVLAS/ref=sr_1_1?ie=UTF8&qid=1477611127&sr=8-1&keywords=arduino+micro+sd
and existing libraries for external audio playback it may be possible to play .wav files from the sd card upon a button press to expand the range of sounds the device can produce. Using a string an audio file from the sd card can be found and played. A non-piezo speaker should also be wired to the arduino for this method.

An expansion upon the external sd card audio source could be to have an array containing a variety of sounds grouped together. Then a button on the instrument could control an offset variable that shifts down the array to load another set of audio files. This would allow the device to change its audio playback while in use without reprogramming.
