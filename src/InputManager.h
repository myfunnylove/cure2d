//
// Copyright Kenjaev Olimjon 03/12/2018
//


#ifndef _INPUT_MANAGER_H
#define _INPUT_MANAGER_H

#include "Window.h"
#include <array>

#define INPUT_MANAGER_MAX_NUM_KEYS 1024

namespace cure2D {

  class InputManager {
  public:
    explicit InputManager(Window* window);
    ~InputManager();
    
    // Temporary: just for quick quit. 
    bool isQuitButtonPressed();
  private:
    friend void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    std::array<bool, INPUT_MANAGER_MAX_NUM_KEYS> *keys;
  };

}  // namespace cure2D

#endif  // _INPUT_MANAGER_H
