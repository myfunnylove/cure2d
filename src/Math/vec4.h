//
//  Copyright Olimjon Kenjaev 05/10/2018 
//

#ifndef _MATH_VEC_4_
#define _MATH_VEC_4_

namespace cure2d {
  namespace math {

    template <class T> struct vec4;
    template <class T>
    std::ostream& operator<<(std::ostream& ostream, const vec4<T>& other);
    
    template <typename T>
    struct vec4 {
      T x;
      T y;
      T z;
      T w;

      vec4();
      vec4(T x, T y, T z, T w);

      bool operator==(const vec4<T>& other) const;
        
      template <class U>
      vec4<T> operator+(const vec4<U>& other) const;
        
      template <class U>
      vec4<T> operator-(const vec4<U>& other) const;

      template <class U>
      vec4<T> operator/(const vec4<U>& other) const;
        
      template <class U>
      vec4<T> operator*(const vec4<U>& other) const;

      template <class U>
      vec4<T>& operator+=(const vec4<U>& other);

      template <class U>
      vec4<T>& operator-=(const vec4<U>& other);

      template <class U>
      vec4<T>& operator*=(const vec4<U>& other);

      template <class U>
      vec4<T>& operator/=(const vec4<U>& other);
      
      template <class U>
      vec4<T> operator*(const U& scalar) const;
        
      friend std::ostream& operator<< <>(std::ostream& ostream, const vec4<T>& other);
    };
  }  // namepsace math
}  // namespace cure2d

#include "vec4.tpp"

#endif  // _MATH_VEC_4_
