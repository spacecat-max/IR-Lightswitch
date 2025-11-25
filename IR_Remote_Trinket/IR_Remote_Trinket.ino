#include <IRremote.h>

#define IR_SEND_PIN 0 //PB0
#define OFF_PIN 1 //PB1
#define ON_PIN 2 //PB2

void setup() {
  //Serial.begin(9600);
  IrSender.begin(IR_SEND_PIN, ENABLE_LED_FEEDBACK); 
}

void loop() {
  // Send ON command
  IrSender.sendNEC(0x26AB, 0xD, 0);
  delay(10);
  IrSender.sendNEC(0x26AB, 0xD, 0); 

  delay(2000); // Wait 2 seconds

  // Send OFF command
  IrSender.sendNEC(0x26AB, 0xA, 0); 
  delay(10);
  IrSender.sendNEC(0x26AB, 0xA, 0); 
  
  delay(2000); // Wait 2 seconds
}





