//
//  Copyright Olimjon Kenjaev 06/05/2018
//

#ifndef _FPS_LIMITER_
#define _FPS_LIMITER_

namespace cure2d {
  class FPSLimiter {
  private:
    double m_framesPerSecond;
    double m_lastTime;
    double m_startTime;
    double m_elapsedTime;
  public:
    FPSLimiter(double framesPerSecond);

    void initialize();
    void start();
    void finish();

    double getElapsedTime();
  };

}  // namespace cure2d


#endif  // _FPS_LIMITER
