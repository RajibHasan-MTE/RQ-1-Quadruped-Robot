#ifndef RECON_H
#define RECON_H

#include <Arduino.h>
#include "driver/ledc.h"
#include "Oscillator.h"

// Servo configuration
#define LEDC_TIMER          LEDC_TIMER_0
#define LEDC_MODE           LEDC_LOW_SPEED_MODE
#define LEDC_CHANNEL_START  0
#define LEDC_RESOLUTION     LEDC_TIMER_12_BIT
#define SERVO_FREQ          50

// Servo positions
enum {
  FRONT_RIGHT_HIP,
  FRONT_LEFT_HIP,
  BACK_RIGHT_HIP,
  BACK_LEFT_HIP,
  FRONT_RIGHT_LEG,
  FRONT_LEFT_LEG,
  BACK_RIGHT_LEG,
  BACK_LEFT_LEG
};

class Recon {
  public:
    Recon();
    void init();
    void home();
    
    // Movement functions
    void walk(int dir, float steps, float T);
    void turnL(float steps, float T = 600);
    void turnR(float steps, float T = 600);
    void dance(float steps, float T = 600);
    // ... other movement functions ...

  private:
    int board_pins[8];
    int reverse[8];
    int trim[8];
    float _servo_position[8];
    Oscillator oscillator[8];
    
    void setServo(int id, float target);
    void execute(float steps, float period[8], int amplitude[8], int offset[8], int phase[8]);
    int angToUsec(float value);
};

#endif