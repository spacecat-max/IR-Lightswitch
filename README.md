# IR-Lightswitch
IR Lightswitch to control my LED lights

Currently, the kitchen light is annoying and the IR remote that came with the LED strip isn't easy to click.

What I learned so far:
- Operating rate (eg 8 MHz vs 16 MHz) of the arduino trinket is important for the data to be transmitted correctly
- Arduino Trinkets can be programmed using another arduino via ISP because the USB programming is finicky 
- 2 IR LEDs reach futher than 1 (bc of positive interference lollll)

Basic To Do:
[X] Read the on/off IR codes from the LED IR remote\
[X] Test circuit and if codes are correct with LED strip\
[X] Upload onto Arduino trinket\
[ ] Document circuit design\
[X] Upload code to github\
[ ] Design enclosure to switch\
