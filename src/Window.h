//
// Copyright Olimjon Kenjaev 03/12/2018
//


#ifndef _WINDOW_H
#define _WINDOW_H

#include <string>

class GLFWwindow;
namespace cure2d {

  class Window {
  public:
    Window();
    ~Window();
    
    void clear();
    void update() const;
    bool closed() const;

    GLFWwindow* getGLFWwindow();
  private:
    void setupEnvironment();
    
  private:
    std::string m_windowTitle;
    int m_width;
    int m_height;
    GLFWwindow* m_window;
  };
  
}  // namepsace cure2D;



#endif  // _WINDOW_H
