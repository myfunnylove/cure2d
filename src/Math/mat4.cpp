//
//  Copyright Olimjon Kenjaev 05/10/2018
//

#include "mat4.h"

namespace cure2d {
  namespace math {

    mat4::mat4() {
      for (int i = 0; i < 16; i++) {
        elements[i] = 0;
      }
    }

    mat4::mat4(float diagonal) {
      for (int i = 0; i < 16; i++) {
        elements[i] = 0;
      }

      elements[0 + 0 * 4] = diagonal;
      elements[1 + 1 * 4] = diagonal;
      elements[2 + 2 * 4] = diagonal;
      elements[3 + 3 * 4] = diagonal;
    }

    mat4 mat4::identity() {
      return mat4(1.0f);
    }

    mat4 mat4::operator*(const mat4& other) {
      
    }

    mat4& mat4::operator*=(const mat4& other) {

    }

    mat4 mat4::orthographic(float left, float right, float top, float bottom, float near, float far) {

    }

    mat4 mat4::perspective(float fov, float aspectRatio, float near, float far) {

    }

    mat4 mat4::translation(const vec3<float>& translation) {

    }

    mat4 mat4::rotation(float angle, const vec3<float>& axis) {

    }

    mat4 mat4::scale(const vec3<float> scale) {

    }
    
  }  // namespace math
}  // namespace cure2d
