//
//  Copyright Olimjon Kenjaev 05/08/2018
//

#include "vec2.h"

namespace cure2d {
  namespace math {

    template <class T>
    vec2<T>::vec2() {
      x = 0.0f;
      y = 0.0f;
    }

    template <class T>
    vec2<T>::vec2(T x, T y) {
      this->x = x;
      this->y = y;
    }

    template <class T>
    vec2<T>::vec2(const vec2<T>& other) {
      x = other.x;
      y = other.y;
    } 

    template <class T>
    bool vec2<T>::operator==(const vec2<T>& other) const {
      return x == other.x && y == other.y;
    }

    template <class T>
    vec2<T> vec2<T>::operator+(const vec2<T>& other) const {
      return vec2(x + other.x, y + other.y);
    }

    template <class T>
    vec2<T> vec2<T>::operator-(const vec2<T>& other) const {
      return vec2(x - other.x, y - other.y);
    }

    template <class T>
    vec2<T> vec2<T>::operator*(const vec2<T>& other) const {
      return vec2(x * other.x, y * other.y);
    }

    template <class T>
    vec2<T> vec2<T>::operator/(const vec2<T>& other) const {
      return vec2(x / other.x, y / other.y);
    }

    template <class T>
    vec2<T> vec2<T>::operator*(const int& scalar) const {
      return vec2(x * scalar, y * scalar);
    }

    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec2<T>& other) {
      ostream << "(" << other.x << "," << other.y << ")";
      return ostream;
    }
    
  }  // namespace math
}  // namespace cure2d
