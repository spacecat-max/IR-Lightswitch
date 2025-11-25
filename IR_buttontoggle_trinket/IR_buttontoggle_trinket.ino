#include <IRremote.h>
#include <TinySleeper.h>

#define IR_SEND_PIN 1   // PB1, IR pin and intetionally chosen to make led blink also
#define BUTTON_PIN 0    // PB0, your button

bool deviceOn = false; // Tracks ON/OFF state

void setup() 
{
  wdt_disable();

  pinMode(BUTTON_PIN, INPUT_PULLUP); // Button with internal pull-up
  IrSender.begin(IR_SEND_PIN, ENABLE_LED_FEEDBACK);

  TinySleeper.enablePinManagement(true);

}

void loop() 
{
  
  if (digitalRead(BUTTON_PIN) == LOW) 
  {
    if (!deviceOn) 
    {
      // Turn ON
      IrSender.sendNEC(0x26AB, 0xD, 0);  // Send ON command
      delay(10); //necessary double send for it to work
      IrSender.sendNEC(0x26AB, 0xD, 0);
      deviceOn = true;
    } 
    else 
    {
      // Turn OFF
      IrSender.sendNEC(0x26AB, 0xA, 0);  // Send OFF command
      delay(10);
      IrSender.sendNEC(0x26AB, 0xA, 0);
      deviceOn = false;
    }

    // Wait until button released to avoid multiple toggles
    while (digitalRead(BUTTON_PIN) == LOW) 
    {
      TinySleeper.sleep(100); // Sleep while holding button
    }
    TinySleeper.sleep(500);
  }
}
