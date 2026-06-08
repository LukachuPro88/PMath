#ifndef PM_UNITS_H
#define PM_UNITS_H

extern float PM_SCALE;
extern float PM_GRAVITY;

#define PM_SIM_TO_METER(x)                                                     \
  ((x) / PM_SCALE) // Convert simulation units to meters
#define PM_METER_TO_SIM(x)                                                     \
  ((x) * PM_SCALE) // Convert meters to simulation units

/**
 * @brief Sets the whole simulations scale.
 *
 * @note Calculate scale with scale = sim_units / meters
 *
 * @example PM_SetScale(40.0f / 0.2f)
 *
 * @param scale The scale to set.
 */
void PM_SetScale(float scale);

#endif
