#ifndef PM_VEC3_H
#define PM_VEC3_H

#include <math.h>

typedef struct {
  float x;
  float y;
  float z;
} PM_Vec3;

/**
 * @brief Adds two PM_Vec3 together.
 *
 * @param a The first PM_Vec3.
 * @param b The second PM_Vec3.
 *
 * @return The sum of both PM_Vec3's.
 */
static inline PM_Vec3 PM_Vec3_Add(PM_Vec3 a, PM_Vec3 b) {
  return (PM_Vec3){a.x + b.x, a.y + b.y, a.z + b.z};
}

/**
 * @brief Subtracts PM_Vec3 b from PM_Vec3 a.
 *
 * @param a The first PM_Vec3.
 * @param b The PM_Vec3 to subtract.
 *
 * @return The difference of both PM_Vec3's.
 */
static inline PM_Vec3 PM_Vec3_Sub(PM_Vec3 a, PM_Vec3 b) {
  return (PM_Vec3){a.x - b.x, a.y - b.y, a.z - b.z};
}

/**
 * @brief Scales a PM_Vec3 by a scalar value.
 *
 * @note Useful for applying delta time to velocity.
 * @example vel = PM_Vec3_Scale(vel, deltaTime);
 *
 * @param v The PM_Vec3 to scale.
 * @param s The scalar to multiply by.
 *
 * @return The scaled PM_Vec3.
 */
static inline PM_Vec3 PM_Vec3_Scale(PM_Vec3 v, float s) {
  return (PM_Vec3){v.x * s, v.y * s, v.z * s};
}

/**
 * @brief Returns the magnitude (length) of a PM_Vec3.
 *
 * @param v The PM_Vec3 to get the magnitude of.
 *
 * @return The magnitude as a float.
 */
static inline float PM_Vec3_Magnitude(PM_Vec3 v) {
  return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

/**
 * @brief Normalizes a PM_Vec3 to a unit vector (length of 1).
 *
 * @note Preserves direction but sets magnitude to 1.
 *       Useful for getting the direction of a vector.
 *
 * @param v The PM_Vec3 to normalize.
 *
 * @return The normalized PM_Vec3.
 */
static inline PM_Vec3 PM_Vec3_Normalize(PM_Vec3 v) {
  float mag = PM_Vec3_Magnitude(v);
  return (PM_Vec3){v.x / mag, v.y / mag, v.z / mag};
}

/**
 * @brief Returns the dot product of two PM_Vec3's.
 *
 * @note Returns 1 if vectors point the same direction,
 *       0 if perpendicular, -1 if opposite.
 *
 * @param a The first PM_Vec3.
 * @param b The second PM_Vec3.
 *
 * @return The dot product as a float.
 */
static inline float PM_Vec3_Dot(PM_Vec3 a, PM_Vec3 b) {
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

/**
 * @brief Returns the cross product of two PM_Vec3's.
 *
 * @note Returns a vector perpendicular to both a and b.
 *       Only exists in 3D, not available in PM_Vec2.
 *
 * @param a The first PM_Vec3.
 * @param b The second PM_Vec3.
 *
 * @return The cross product as a PM_Vec3.
 */
static inline PM_Vec3 PM_Vec3_Cross(PM_Vec3 a, PM_Vec3 b) {
  return (PM_Vec3){a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z,
                   a.x * b.y - a.y * b.x};
}

#endif
