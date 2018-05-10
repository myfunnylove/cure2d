//
//  Copyright 05/10/2018
//

#ifndef _MATH_MAT_4_
#define _MATH_MAT_4_

#include "vec3.h"

namespace cure2d {
  namespace math {

    struct mat4 {
      float elements[16];

      mat4();
      mat4(float diagonal);
      
      static mat4 identity();
      mat4 operator*(const mat4& other);
      mat4& operator*=(const mat4& other);

      static mat4 orthographic(float left, float right, float top, float bottom, float near, float far);
      static mat4 perspective(float fov, float aspectRatio, float near, float far);

      static mat4 translation(const vec3<float>& translation);
      static mat4 rotation(float angle, const vec3<float>& axis);
      static mat4 scale(const vec3<float> scale);
    };
    
  }  // namespace mat4
}  // namepspace cure2d
#endif  // namespace _MATH_MAT_4_
