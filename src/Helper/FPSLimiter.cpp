//
//  Copyright Olimjon Kenjaev 06/05/2018
//

#include "FPSLimiter.h"
#include <GLFW/glfw3.h>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <iostream>

namespace cure2d {

  FPSLimiter::FPSLimiter(double framesPerSecond):m_framesPerSecond(framesPerSecond) { }
  
  void FPSLimiter::initialize() {
    m_lastTime = glfwGetTime();
  }

  void FPSLimiter::start() {
    m_startTime = glfwGetTime();
    m_elapsedTime = m_lastTime - m_startTime;
  }

  void FPSLimiter::finish() {
    double endTime = glfwGetTime();
    double sleepTime = endTime - m_startTime + m_framesPerSecond;
    
    usleep(sleepTime);
    
    m_lastTime = endTime;
  }

  double FPSLimiter::getElapsedTime() {
    return m_elapsedTime;
  }
  
}  // namespace cure2d
