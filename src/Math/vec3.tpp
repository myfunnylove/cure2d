//
//  Copyright Olimjon Kenjaev 05/09/2018
//


#include "vec3.h"

namespace cure2d {
  namespace math {

    template <typename T>
      vec3<T>::vec3(): x(0), y(0), z(0){}

    template <typename T>
      vec3<T>::vec3(T _x, T _y, T _z): x(_x), y(_y), z(_z) {}

     template <class T>
    bool vec3<T>::operator==(const vec3<T>& other) const {
      return x == other.x && y == other.y && z == other.z;
    }

    template <class T>
    template <class U>
    vec3<T> vec3<T>::operator+(const vec3<U>& other) const {
      return vec3(x + other.x, y + other.y, z + other.z);
    }

    template <class T>
    template <class U>
    vec3<T> vec3<T>::operator-(const vec3<U>& other) const {
      return vec3(x - other.x, y - other.y, z - other.z);
    }

    template <class T>
    template <class U>
    vec3<T> vec3<T>::operator*(const vec3<U>& other) const {
      return vec3(x * other.x, y * other.y, z * other.z);
    }

    template <class T>
    template <class U>
    vec3<T> vec3<T>::operator/(const vec3<U>& other) const {
      return vec3(x / other.x, y / other.y, z / other.z);
    }

    template <class T>
    template <class U>
    vec3<T> vec3<T>::operator*(const U& scalar) const {
      return vec3(x * scalar, y * scalar, z * scalar);
    }

    template <class T>
    template <class U>
    vec3<T>& vec3<T>::operator+=(const vec3<U>& other) {
      x += other.x;
      y += other.y;
      z += other.z;
      return *this;
    }

    template <class T>
    template <class U>
    vec3<T>& vec3<T>::operator-=(const vec3<U>& other) {
      x -= other.x;
      y -= other.y;
      z -= other.z;
      return *this;
    }

    template <class T>
    template <class U>
    vec3<T>& vec3<T>::operator*=(const vec3<U>& other) {
      x *= other.x;
      y *= other.y;
      z *= other.z;
      return *this;
    }

    template <class T>
    template <class U>
    vec3<T>& vec3<T>::operator/=(const vec3<U>& other) {
      x /= other.x;
      y /= other.y;
      z /= other.z;
      return *this;
    }
    
    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec3<T>& other) {
      ostream << "(" << other.x << "," << other.y << "," << other.z << ")";
      return ostream;
    }
  }  // namespace math
}  // namespace cure2d
