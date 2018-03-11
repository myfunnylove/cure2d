#ifndef _WINDOW_H
#define _WINDOW_H

#include <GLFW/glfw3.h>
#include <string>

namespace cure2D {

  class Window {
  public:
    Window();
    ~Window();
    
    void clear();
    void update();
    bool closed();
    
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
