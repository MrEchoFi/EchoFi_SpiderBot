#include <ESP32Servo.h>

// Create four Servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
void setup() {
  // Set frequency for servo control
  servo1.setPeriodHertz(50);
  servo2.setPeriodHertz(50);
  servo3.setPeriodHertz(50);
  servo4.setPeriodHertz(50);
  servo5.setPeriodHertz(50);
  servo6.setPeriodHertz(50);
  servo7.setPeriodHertz(50);
  servo8.setPeriodHertz(50);

  // Attach servos to their respective GPIO pins
  servo1.attach(13); // Servo 1 pin
  servo2.attach(15); // Servo 2 pin
  servo3.attach(14); // Servo 3 pin
  servo4.attach(32); // Servo 4 pin
   servo5.attach(12); // Servo 5 pin
  servo6.attach(27); // Servo 6 pin
  servo7.attach(25); // Servo 7 pin
  servo8.attach(33); // Servo 8 pin
  // Set all servos to 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
   servo5.write(90);
  servo6.write(90);
  servo7.write(90);
  servo8.write(90);
}

void loop() {
  }
