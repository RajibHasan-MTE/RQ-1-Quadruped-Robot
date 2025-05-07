#include "Recon.h"

Recon recon;

void setup() {
  recon.init();
}

void loop() {
  recon.walkForward();
  delay(2000);
  recon.walkForward();
  delay(2000);
  recon.walkForward();
  delay(2000);
  recon.walkBackward();
  delay(2000);
}
