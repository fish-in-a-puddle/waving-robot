# Learn to build a waving robot

(add image here)

As you probably know, there are many kinds of robots. Some are giant arms that complete percision tasks without error. Some are rovers that can drive around on their own. But not all robots are complicated. This robot has only one job: to check if there is someone nearby and decide whether or not to wave and turn on a little light. It does its job with the help of a sensor. Sensors are how robots get information about the world around them. This robot has an ultrasonic sensor, which uses a process similar to a dolphin's echolocation to determine if there is anything nearby. The Arduino takes this information and uses it to make a decision. If it recieves the message that there is something within 100cm of the robot, it will send a message to the servo motor for it to sweep back and forth and a message to the LED to turn it on. If it doesn't recieve this message, it sends a message to turn off the LED.

## What you'll need:

For the electronics:

- Arduino Uno x1
- Half breadboard x1
- Servo motor x1
- Ultrasonic sensor x1
- 1k ohm resistor x1
- Jumper wires x10
- LED x1

For the robot:

- Some cardboard (an old pizza box is perfect for this)
- Scotch tape or masking tape 
- A pair of scissors
- A pencil 
- A ruler

## Step One: Making your base

In order for the robot to be able to wave at the people who walk by without knocking itself over, it needs a base. Start by cutting out a cardboard rectangle wide enough for the Arduino Uno and the half breadboard to sit next to each other and long enough for the servo motor to sit next to the breadboard. 