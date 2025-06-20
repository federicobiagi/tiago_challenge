#ifndef UTILS_HPP_
#define UTILS_HPP_

/*************************************************
 * Define
 ************************************************/

#define PI_4 (7.85398163397e-1f)

/*************************************************
 * Structures
 ************************************************/

struct  Position
{
  float f_x;
  float f_y;
  float f_z;
};

struct  Quaternion
{
  float f_w;
  float f_x;
  float f_y;
  float f_z;
};

struct  State
{
  Position   position;
  Quaternion quaternion;
};

#endif // UTILS_HPP_
