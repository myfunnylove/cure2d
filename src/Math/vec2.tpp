//
//  Copyright Olimjon Kenjaev 05/08/2018
//

#include "vec2.h"

namespace cure2d {
  namespace math {

    template <class T>
      vec2<T>::vec2(): x(0), y(0) {}

    template <class T>
      vec2<T>::vec2(T _x, T _y): x(_x), y(_y) {
    }

    template <class T>
    bool vec2<T>::operator==(const vec2<T>& other) const {
      return x == other.x && y == other.y;
    }

    template <class T>
    template <class U>
    vec2<T> vec2<T>::operator+(const vec2<U>& other) const {
      return vec2(x + other.x, y + other.y);
    }

    template <class T>
    template <class U>
    vec2<T> vec2<T>::operator-(const vec2<U>& other) const {
      return vec2(x - other.x, y - other.y);
    }

    template <class T>
    template <class U>
    vec2<T> vec2<T>::operator*(const vec2<U>& other) const {
      return vec2(x * other.x, y * other.y);
    }

    template <class T>
    template <class U>
    vec2<T> vec2<T>::operator/(const vec2<U>& other) const {
      return vec2(x / other.x, y / other.y);
    }

    template <class T>
    template <class U>
    vec2<T> vec2<T>::operator*(const U& scalar) const {
      return vec2(x * scalar, y * scalar);
    }

    template <class T>
    template <class U>
    vec2<T>& vec2<T>::operator+=(const vec2<U>& other) {
      x += other.x;
      y += other.y;
      return *this;
    }

    template <class T>
    template <class U>
    vec2<T>& vec2<T>::operator-=(const vec2<U>& other) {
      x -= other.x;
      y -= other.y;
      return *this;
    }

    template <class T>
    template <class U>
    vec2<T>& vec2<T>::operator*=(const vec2<U>& other) {
      x *= other.x;
      y *= other.y;
      return *this;
    }

    template <class T>
    template <class U>
    vec2<T>& vec2<T>::operator/=(const vec2<U>& other) {
      x /= other.x;
      y /= other.y;
      return *this;
    }
    
    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec2<T>& other) {
      ostream << "(" << other.x << "," << other.y << ")";
      return ostream;
    }

  }  // namespace math
}  // namespace cure2d
