#include "pm_units.h"

float PM_SCALE = 1.0f;
float PM_GRAVITY = 9.81f;

void PM_SetScale(float scale) {
  if (scale != 0.0f) {
    PM_SCALE = scale;
  }
}
