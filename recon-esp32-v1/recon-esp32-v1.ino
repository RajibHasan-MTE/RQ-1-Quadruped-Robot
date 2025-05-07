#include "Recon.h"
  Recon recon;

void setup() {
  recon.init();
}

void loop() {
  recon.walkForward();
  delay(1000);
  recon.walkForward();
  delay(1000);
  recon.walkForward();
  delay(1000);
}
