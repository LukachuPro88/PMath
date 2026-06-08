#ifndef PM_VEC2_H
#define PM_VEC2_H

#include <math.h>

typedef struct {
  float x;
  float y;
} PM_Vec2;

/**
 * @brief Adds two PM_Vec2 together.
 *
 * @param a The first PM_Vec2.
 * @param b The second PM_Vec2.
 *
 * @return The sum of both PM_Vec2's.
 */
static inline PM_Vec2 PM_Vec2_Add(PM_Vec2 a, PM_Vec2 b) {
  return (PM_Vec2){a.x + b.x, a.y + b.y};
}

/**
 * @brief Subtracts PM_Vec2 b from PM_Vec2 a.
 *
 * @param a The first PM_Vec2.
 * @param b The PM_Vec2 to subtract.
 *
 * @return The difference of both PM_Vec2's.
 */
static inline PM_Vec2 PM_Vec2_Sub(PM_Vec2 a, PM_Vec2 b) {
  return (PM_Vec2){a.x - b.x, a.y - b.y};
}

/**
 * @brief Scales a PM_Vec2 by a scalar value.
 *
 * @note Useful for applying delta time to velocity.
 * @example vel = PM_Vec2_Scale(vel, deltaTime);
 *
 * @param v The PM_Vec2 to scale.
 * @param s The scalar to multiply by.
 *
 * @return The scaled PM_Vec2.
 */
static inline PM_Vec2 PM_Vec2_Scale(PM_Vec2 v, float s) {
  return (PM_Vec2){v.x * s, v.y * s};
}

/**
 * @brief Returns the magnitude (length) of a PM_Vec2.
 *
 * @param v The PM_Vec2 to get the magnitude of.
 *
 * @return The magnitude as a float.
 */
static inline float PM_Vec2_Magnitude(PM_Vec2 v) {
  return sqrtf(v.x * v.x + v.y * v.y);
}

/**
 * @brief Normalizes a PM_Vec2 to a unit vector (length of 1).
 *
 * @note Preserves direction but sets magnitude to 1.
 *       Useful for getting the direction of a vector.
 *
 * @param v The PM_Vec2 to normalize.
 *
 * @return The normalized PM_Vec2.
 */
static inline PM_Vec2 PM_Vec2_Normalize(PM_Vec2 v) {
  float mag = PM_Vec2_Magnitude(v);
  return (PM_Vec2){v.x / mag, v.y / mag};
}

/**
 * @brief Returns the dot product of two PM_Vec2's.
 *
 * @note Returns 1 if vectors point the same direction,
 *       0 if perpendicular, -1 if opposite.
 *
 * @param a The first PM_Vec2.
 * @param b The second PM_Vec2.
 *
 * @return The dot product as a float.
 */
static inline float PM_Vec2_Dot(PM_Vec2 a, PM_Vec2 b) {
  return a.x * b.x + a.y * b.y;
}

#endif
