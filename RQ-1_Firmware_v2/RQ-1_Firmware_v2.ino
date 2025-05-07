#include "Recon.h"

Recon::Recon() {
  board_pins[FRONT_RIGHT_HIP]  = 2;
  board_pins[FRONT_LEFT_HIP]   = 4;
  board_pins[BACK_RIGHT_HIP]   = 5;
  board_pins[BACK_LEFT_HIP]    = 13;
  board_pins[FRONT_RIGHT_LEG]  = 14;
  board_pins[FRONT_LEFT_LEG]   = 15;
  board_pins[BACK_RIGHT_LEG]   = 16;
  board_pins[BACK_LEFT_LEG]    = 17;
}

void Recon::init() {
  for (int i = 0; i < NUM_LEGS; i++) {
    servos[i].setPeriodHertz(50);
    servos[i].attach(board_pins[i], 500, 2400);
  }

  for (int i = 0; i < NUM_LEGS; i++) {
    servos[i].write(hipStraightAngle); // Default to standing
    delay(200);
  }
}

void Recon::setLeg(int index, int angle) {
  servos[index].write(angle);
}

void Recon::setHip(int index, int angle) {
  servos[index].write(angle);
}

void Recon::walkForward() {
  // Example gait
  setHip(FRONT_RIGHT_HIP, hipSwingAngle);
  setLeg(FRONT_RIGHT_LEG, legUpAngle);
  delay(300);
  setLeg(FRONT_RIGHT_LEG, legDownAngle);
  setHip(FRONT_RIGHT_HIP, hipStraightAngle);
  delay(300);

  setHip(FRONT_LEFT_HIP, hipSwingAngle);
  setLeg(FRONT_LEFT_LEG, legUpAngle);
  delay(300);
  setLeg(FRONT_LEFT_LEG, legDownAngle);
  setHip(FRONT_LEFT_HIP, hipStraightAngle);
  delay(300);

  setHip(BACK_RIGHT_HIP, hipSwingAngle);
  setLeg(BACK_RIGHT_LEG, legUpAngle);
  delay(300);
  setLeg(BACK_RIGHT_LEG, legDownAngle);
  setHip(BACK_RIGHT_HIP, hipStraightAngle);
  delay(300);

  setHip(BACK_LEFT_HIP, hipSwingAngle);
  setLeg(BACK_LEFT_LEG, legUpAngle);
  delay(300);
  setLeg(BACK_LEFT_LEG, legDownAngle);
  setHip(BACK_LEFT_HIP, hipStraightAngle);
  delay(300);
}

void Recon::walkBackward() {
  // Reverse gait
  setHip(BACK_LEFT_HIP, hipSwingAngle);
  setLeg(BACK_LEFT_LEG, legUpAngle);
  delay(300);
  setLeg(BACK_LEFT_LEG, legDownAngle);
  setHip(BACK_LEFT_HIP, hipStraightAngle);
  delay(300);

  setHip(BACK_RIGHT_HIP, hipSwingAngle);
  setLeg(BACK_RIGHT_LEG, legUpAngle);
  delay(300);
  setLeg(BACK_RIGHT_LEG, legDownAngle);
  setHip(BACK_RIGHT_HIP, hipStraightAngle);
  delay(300);

  setHip(FRONT_LEFT_HIP, hipSwingAngle);
  setLeg(FRONT_LEFT_LEG, legUpAngle);
  delay(300);
  setLeg(FRONT_LEFT_LEG, legDownAngle);
  setHip(FRONT_LEFT_HIP, hipStraightAngle);
  delay(300);

  setHip(FRONT_RIGHT_HIP, hipSwingAngle);
  setLeg(FRONT_RIGHT_LEG, legUpAngle);
  delay(300);
  setLeg(FRONT_RIGHT_LEG, legDownAngle);
  setHip(FRONT_RIGHT_HIP, hipStraightAngle);
  delay(300);
}
