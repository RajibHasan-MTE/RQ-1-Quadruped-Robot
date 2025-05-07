#ifndef RECON_H
#define RECON_H

#include <ESP32Servo.h>

#define NUM_LEGS 8

// Servo indexes
#define FRONT_RIGHT_HIP  0
#define FRONT_LEFT_HIP   1
#define BACK_RIGHT_HIP   2
#define BACK_LEFT_HIP    3
#define FRONT_RIGHT_LEG  4
#define FRONT_LEFT_LEG   5
#define BACK_RIGHT_LEG   6
#define BACK_LEFT_LEG    7

class Recon {
  private:
    Servo servos[NUM_LEGS];
    int board_pins[NUM_LEGS];
    
    int hipStraightAngle = 150;
    int hipSwingAngle = 40;

    int legDownAngle = 90;
    int legUpAngle = 60;

  public:
    Recon();
    void init();
    void walkForward();
    void walkBackward();
    void setLeg(int index, int angle);
    void setHip(int index, int angle);
};

#endif
