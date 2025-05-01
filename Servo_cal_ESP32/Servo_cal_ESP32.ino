//author: Rajib Hasan


#include <ESP32Servo.h>

Servo servo1, servo2, servo3, servo4;
Servo servo5, servo6, servo7, servo8;

void setup() {
  Serial.begin(115200);

  // Attach each servo to its pin
  servo1.attach(13);
  servo2.attach(14);
  servo3.attach(15); // Make sure it's LOW at boot
  servo4.attach(18);
  servo5.attach(19);
  servo6.attach(23);
  servo7.attach(25);
  servo8.attach(26);

  delay(100);
  int angle = 90;
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
  servo5.write(angle);
  servo6.write(angle);
  servo7.write(angle);
  servo8.write(angle);
  delay(2000);

  servo1.write(angle+10);
  servo3.write(angle-10);
  servo5.write(angle-20);
  servo7.write(angle+20);

}

void loop() {


  int angle;
  
  angle = 90;
  servo2.write(angle+50);
  servo4.write(angle+50);
  servo6.write(angle+50);
  servo8.write(angle+50);
  delay(1000);

   angle = 50;
  servo2.write(angle+50);
  servo4.write(angle+50);
  servo6.write(angle+50);
  servo8.write(angle+50);
  delay(1000);

  angle = 90;
  servo2.write(angle+50);
  servo4.write(angle+50);
  servo6.write(angle+50);
  servo8.write(angle+50);
  delay(1000);
  

  angle = 130;
  servo2.write(angle+50);
  servo4.write(angle+50);
  servo6.write(angle+50);
  servo8.write(angle+50);
  delay(1000);
/*
  // Example: move all servos from 0 to 180 degrees
  for (int angle = 50; angle <= 100; angle += 1) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    servo6.write(angle);
    servo7.write(angle);
    servo8.write(angle);
    delay(20);
  }

  //delay(1000);

  for (int angle = 100; angle >= 50; angle -= 1) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    servo5.write(angle);
    servo6.write(angle);
    servo7.write(angle);
    servo8.write(angle);
    delay(20);
  }
*/
  //delay(100);
}
