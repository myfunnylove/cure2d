//
//  Copyright Olimjon Kenjaev 05/09/2018
//

#ifndef _MATH_VEC_3_
#define _MATH_VEC_3_

#include <iostream>

namespace cure2d {
  namespace math {

    template <class T> struct vec3;
    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec3<T>& other);
    
    template <typename T>
    struct vec3 {
      T x;
      T y;
      T z;

      vec3();
      vec3(T x, T y, T z);

      bool operator==(const vec3<T>& other) const;
        
      template <class U>
      vec3<T> operator+(const vec3<U>& other) const;
        
      template <class U>
      vec3<T> operator-(const vec3<U>& other) const;

      template <class U>
      vec3<T> operator/(const vec3<U>& other) const;
        
      template <class U>
      vec3<T> operator*(const vec3<U>& other) const;

      template <class U>
      vec3<T>& operator+=(const vec3<U>& other);

      template <class U>
      vec3<T>& operator-=(const vec3<U>& other);

      template <class U>
      vec3<T>& operator*=(const vec3<U>& other);

      template <class U>
      vec3<T>& operator/=(const vec3<U>& other);
      
      template <class U>
      vec3<T> operator*(const U& scalar) const;
        
      friend std::ostream& operator<< <>(std::ostream& ostream, const vec3<T>& other);
    };
  }  // namespace math
}  // namespace cure2d

#include "vec3.tpp"

#endif  // _MATH_VEC_3_
