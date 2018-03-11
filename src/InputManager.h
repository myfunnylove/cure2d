//
// Copyright Kenjaev Olimjon 03/12/2018
//


#ifndef _INPUT_MANAGER_H
#define _INPUT_MANAGER_H

#include "Window.h"

namespace cure2D {

  class InputManager {
  public:
    explicit InputManager(Window* window);

    // Temporary: just for quick quit. 
    bool isQuitButtonPressed();
  private:
    friend void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    bool quitButton;
  };

}  // namespace cure2D

#endif  // _INPUT_MANAGER_H
