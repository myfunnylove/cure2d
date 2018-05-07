//
//  Copyright Olimjon Kenjaev 06/05/2018
//

#ifndef _FPS_LIMITER_
#define _FPS_LIMITER_

#include <chrono>

namespace cure2d {
  
  class FPSLimiter {
  private:
  public:
    FPSLimiter();

    void initialize();
    void start();
    void finish();

    float getElapsedTime();
  };

}  // namespace cure2d


#endif  // _FPS_LIMITER
