/*This sketch is to test the .wav file playback capabilities of an arduino
 * To use this an sd card must be connected. If your board does not support
 * SD cards by default external modules can be connected using pins 13,12,11, and 4
 * It is also worth noting that a speaker will need to be connected to pin9 for
 * audio playback. If the card cannot be read or is improperly connected the
 * serial monitor will display "SD fail.
 * The .wav file to be played should also be titled "test.wav" or the string in
 * the tmrpcm.play() function call should be changed to the name of the .wav file
 */

#include <SD.h>
#define SD_ChipSelectPin 4
#include <TMRpcm.h>
#include <SPI.h>

TMRpcm tmrpcm;

void setup(){
tmrpcm.speakerPin = 9;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return;
}



tmrpcm.setVolume(6);
tmrpcm.play("test.wav");
}

void loop(){  
}
