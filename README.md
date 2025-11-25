# IR Lightswitch 
IR Lightswitch to control my LED lights in the kitchen
![test1](https://github.com/user-attachments/assets/814bfff3-5f91-47ee-ab88-4fc2a37f0402)


Currently, the IR remote that came with the LED strip I have isn't easy to click.

## What I learned so far:
- Operating rate (eg 8 MHz vs 16 MHz) of the arduino trinket is important for the data to be transmitted correctly
- Arduino Trinkets can be programmed using another arduino via ISP because the USB programming is finicky 
- 2 IR LEDs reach futher than 1 (bc of positive interference lollll)

## Task List:\
[X] Read the on/off IR codes from the LED IR remote\
[X] Test circuit and if codes are correct with LED strip\
[X] Upload onto Arduino trinket\
[X] Document circuit design\
[X] Upload code to github\
[ ] Design enclosure to switch

## Code Files
read_IR_remote: Start here! Code that reads the hex code your LED strip remote sends and determine the protocal it was sent by. You will need a IR receiver.

IR_Remote_Trinket: Wiring based on wiring diagram below, with the microcontroller sending the IR encoding for on, waiting 2 seconds, sending the IR encoding for off, wait 2 seconds then repeat! 

IR_buttontoggle_trinket: Final version of the code, where upon a button press the on/off signal will be transmitted

## Circuit Diagram w Trinket
<img width="1045" height="455" alt="evil_circuit_diagram" src="https://github.com/user-attachments/assets/1db549e5-2824-4d5b-8e87-30c929301d72" />
