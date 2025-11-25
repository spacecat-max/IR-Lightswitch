#include <IRremote.h>

#define IR_RECEIVE_PIN 7

void setup() 
{
  Serial.begin(9600);
  Serial.println("IR Remote Reader");
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop() 
{
  if (IrReceiver.decode()) 
  {
    Serial.println();
    Serial.print("Protocol: ");
    Serial.println(IrReceiver.decodedIRData.protocol);
    
    Serial.print("Address: 0x");
    Serial.println(IrReceiver.decodedIRData.address, HEX);
    
    Serial.print("Command: 0x");
    Serial.println(IrReceiver.decodedIRData.command, HEX);
    
    Serial.print("Raw Data: 0x");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);

    IrReceiver.resume();
  }
}