# Learn to build a waving robot

(add image here)

As you probably know, there are many kinds of robots. Some are giant arms that complete percision tasks without error. Some are rovers that can drive around on their own. But not all robots are complicated. This robot has only one job: to check if there is someone nearby and decide whether or not to wave and turn on a little light. It does its job with the help of a sensor. Sensors are how robots get information about the world around them. This robot has an ultrasonic sensor, which uses a process similar to a dolphin's echolocation to determine if there is anything nearby. The Arduino takes this information and uses it to make a decision. If it recieves the message that there is something within 100cm of the robot, it will send a message to the servo motor for it to sweep back and forth and a message to the LED to turn it on. If it doesn't recieve this message, it sends a message to turn off the LED.

## What you'll need: