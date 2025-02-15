# 6-Servo Motor Control System". 
This project involves controlling six servo motors using an Arduino. The motors will perform a sweep motion for two seconds and then hold at a 90-degree position.

1. Connecting the Servos:
First, I connected 6 servos to the Arduino using a breadboard. Each servo was connected to a separate pin on the Arduino ( 2, 3, 4, 5, 6, 7).  
I made sure to correctly connect 5V and GND to the breadboard to distribute power to all the servos.

 2. Programming:
I used the Servo library to control the servos. In the beginning of the code, I defined 6 servo objects. Then, in the setup() function, I attached each servo to its respective pin using the attach() function.  
In the loop() function:
- I made the servos sweep from 0 degrees to 180 degrees and back within a specified time using delay() between movements.
- After the sweep movement, I made all the servos hold at 90 degrees for 2 seconds.
3. Execution:
- Initially, the servos moved in unison from 0 to 180 degrees and back.
- After completing the sweep, I set the servos to 90 degrees for 2 seconds.

 4. Wiring and Distribution:
- I connected GND and 5V to the breadboard to ensure the servos received the required power.
- The signal wires from the Arduino were connected to each servo through the breadboard, with each servo being controlled by a specific pin on the Arduino.
