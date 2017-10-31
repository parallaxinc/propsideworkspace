/*
  Test Encoder Connections.c

  Load to ActivityBot EEPROM. PWR to Position 2.
  Gently turn each wheel by hand.  Right wheel
  blinks P27 LED, left wheel blinks P26 LED.
  If not, encoders are not measuring rotation.
  Go to Extras/Troubleshooting section of tutorial.

  http://learn.parallax.com/activitybot/test-encoder-connections
*/

                                                                             //
#include "simpletools.h"                      // Library - simpletools
#include "abdrive360.h"                       // Library - abdrive360

int left;                                 // Current/previous angles
int right;
int leftPrev;
int rightPrev;

int main()                                    // Main function
{
  drive_getTicks(&left, &right);              // Get current encoder ticks
  leftPrev = left;                            // Set previous values
  rightPrev = right;
  
  while (1)                                   // Main loop
  {
    drive_getTicks(&left, &right);            // Get current encoder ticks
    if (left != leftPrev)                     // If left different from previous
    {
      toggle(26);                             // Toggle P26 LED light
    }

    if (right != rightPrev)                   // If right different from previous
    {
      toggle(27);                             // Toggle P27 LED light
    }

    leftPrev = left;                          // Save previous values
    rightPrev = right;
  }
}
