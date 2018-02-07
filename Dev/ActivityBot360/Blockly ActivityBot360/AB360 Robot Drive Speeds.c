// ------ Libraries and Definitions ------
#include "simpletools.h"
#include "servo360.h"
#include "abdrive360.h"



// ------ Main Program ------
int main() {

  // Drive Speeds
  freqout(4, 1000, 3000);
  drive_speed(64, 64);
  pause(2000);
  drive_speed(-64, 64);
  pause(350);
  drive_speed(0, 0);

}