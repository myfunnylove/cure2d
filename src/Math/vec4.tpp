//
//  Copyright Olimjon Kenjaev 05/09/2018
//

namespace cure2d {
  namespace math {

    template <typename T>
      vec4<T>::vec4(): x(0), y(0), z(0), w(0){}

    template <typename T>
      vec4<T>::vec4(T _x, T _y, T _z, T _w): x(_x), y(_y), z(_z), w(_w)  {}

     template <class T>
    bool vec4<T>::operator==(const vec4<T>& other) const {
      return x == other.x && y == other.y && z == other.z && w == other.w;
    }

    template <class T>
    template <class U>
    vec4<T> vec4<T>::operator+(const vec4<U>& other) const {
      return vec4(x + other.x, y + other.y, z + other.z, w + other.w);
    }

    template <class T>
    template <class U>
    vec4<T> vec4<T>::operator-(const vec4<U>& other) const {
      return vec4(x - other.x, y - other.y, z - other.z, w - other.w);
    }

    template <class T>
    template <class U>
    vec4<T> vec4<T>::operator*(const vec4<U>& other) const {
      return vec4(x * other.x, y * other.y, z * other.z, w - other.w);
    }

    template <class T>
    template <class U>
    vec4<T> vec4<T>::operator/(const vec4<U>& other) const {
      return vec4(x / other.x, y / other.y, z / other.z, w / other.w);
    }

    template <class T>
    template <class U>
    vec4<T> vec4<T>::operator*(const U& scalar) const {
      return vec4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    template <class T>
    template <class U>
    vec4<T>& vec4<T>::operator+=(const vec4<U>& other) {
      x += other.x;
      y += other.y;
      z += other.z;
      w += other.w;
      return *this;
    }

    template <class T>
    template <class U>
    vec4<T>& vec4<T>::operator-=(const vec4<U>& other) {
      x -= other.x;
      y -= other.y;
      z -= other.z;
      w -= other.w;
      return *this;
    }

    template <class T>
    template <class U>
    vec4<T>& vec4<T>::operator*=(const vec4<U>& other) {
      x *= other.x;
      y *= other.y;
      z *= other.z;
      w *= other.w;
      return *this;
    }

    template <class T>
    template <class U>
    vec4<T>& vec4<T>::operator/=(const vec4<U>& other) {
      x /= other.x;
      y /= other.y;
      z /= other.z;
      w /= other.w;
      return *this;
    }
    
    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec4<T>& other) {
      ostream << "(" << other.x << "," << other.y << "," << other.z << "," << other.w << ")";
      return ostream;
    }
    
  }  // namespace math
}  // namespace cure2d
