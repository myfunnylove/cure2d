//
//  Copyright Olimjon Kenjaev 05/08/2018
//

#ifndef _MATH_VEC_2_
#define _MATH_VEC_2_

#include <iostream>

namespace cure2d {
  namespace math {
    
    template <class T> struct vec2;
    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec2<T>& other);

    template <class T>
    struct vec2 {
     
      T x;
      T y;

      vec2();
      vec2(T x, T y);
      vec2(const vec2<T>& other);

      bool operator==(const vec2<T>& other) const;

      template <class U>
      vec2<T> operator+(const vec2<U>& other) const;

      template <class U>
      vec2<T> operator-(const vec2<U>& other) const;

      template <class U>
      vec2<T> operator/(const vec2<U>& other) const;

      template <class U>
      vec2<T> operator*(const vec2<U>& other) const;

      template <class U>
      vec2<T> operator*(const U& scalar) const;
      
      friend std::ostream& operator<< <T>(std::ostream& ostream, const vec2<T>& other);

    };
  }  // namespace math
}  // namespace cure2d

#include "vec2.tpp"

#endif  // _MATH_VEC_2_
