```html
<style>
.image-container {
    width: 500px;
    height: auto; /* Ensure images maintain aspect ratio */
}
</style>

# Connecting-and-Programming-a-Circuit-with-6-Servo-Motors-Using-TinkerCad
This project demonstrates connecting and programming a circuit with 6 servo motors using TinkerCad. It covers setting up the circuit, connecting the servo motors, and writing the code to control their movements.

## Step 1: Set Up TinkerCad

- Create a TinkerCad account at [TinkerCad](https://www.tinkercad.com/)
- Start a new project

## Step 2: Circuit Diagram

Before connecting all six servo motors in TinkerCad, refer to this diagram for a single servo motor setup:

This diagram illustrates how to connect a servo motor to an Arduino, specifying power (VCC), ground (GND), and signal (PWM) connections. 

![servo-motor-with-arduino-uno-wiring-diagram-schematic-circuit-tutorial-featured-image](https://github.com/justRuba/Connecting-and-Programming-a-Circuit-with-6-Servo-Motors-Using-TinkerCad/assets/134620937/c67d2e44-b376-4131-8910-6a81ffd1e40e)
Reference for image: [Servo Motor Circuit Diagram](https://www.makerguides.com/servo-arduino-tutorial/)
*Example circuit diagram for connecting a servo motor.*

## Step 3: Connect Servo Motors

- Connect the power, ground, and signal wires of each servo motor to the appropriate pins on the Arduino
- Ensure all connections are secure and correctly placed

![Our Sex Servo](https://github.com/justRuba/Connecting-and-Programming-a-Circuit-with-6-Servo-Motors-Using-TinkerCad/assets/134620937/d745c49b-a42a-44f2-9240-7bafa32a873f)

## Step 4: Program the Servo Motors

To control the servo motors and specify their movements, follow these steps to upload and execute the code on the Arduino in TinkerCad:

The following Arduino code snippet demonstrates how to control six servo motors sequentially. Each servo motor is connected to a specific pin on the Arduino, as configured in the setup() function using servo.attach(). The loop() function then commands each servo to move smoothly from 0 to 90 degrees and back using a for loop and servo.write() function calls. Adjust the delay() intervals to modify the speed and smoothness of the servo movements

```cpp
#include <Servo.h>

Servo servoA, servoB, servoC, servoD, servoE, servoF;

void setup() {
  servoA.attach(13);
  servoB.attach(12);
  servoC.attach(11);
  servoD.attach(10);
  servoE.attach(8);
  servoF.attach(7);
}

void loop() {
  // Sweep servos from 0 to 90 degrees
  for (int pos = 0; pos <= 90; pos += 1) {
    servoA.write(pos);
    servoB.write(pos);
    servoC.write(pos);
    servoD.write(pos);
    servoE.write(pos);
    servoF.write(pos);
    delay(15); // Adjust delay for smoother motion
  }

  // Sweep servos from 90 to 0 degrees
  for (int pos = 90; pos >= 0; pos -= 1) {
    servoA.write(pos);
    servoB.write(pos);
    servoC.write(pos);
    servoD.write(pos);
    servoE.write(pos);
    servoF.write(pos);
    delay(15); // Adjust delay for smoother motion
  }

  delay(2000); // Delay before repeating the sequence
}
```

## Step 5: Run the Simulation

After running the operation, it will look like this.

![90 degree](https://github.com/justRuba/Connecting-and-Programming-a-Circuit-with-6-Servo-Motors-Using-TinkerCad/assets/134620937/37a7637c-d803-43a0-94ec-42e56644f30b)
