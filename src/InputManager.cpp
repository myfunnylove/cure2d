//
// Copyright Kenjaev Olimjon 03/12/2018
//

#include "InputManager.h"
#include <GLFW/glfw3.h>

namespace cure2D {

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
  
  InputManager::InputManager(Window* window):quitButton(false) {
    GLFWwindow* glfwWindow = window->getGLFWwindow();
    
    glfwSetWindowUserPointer(glfwWindow, this);
    glfwSetKeyCallback(glfwWindow, keyboard_callback);
  }
  
  bool InputManager::isQuitButtonPressed() {
    return quitButton;
  }

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    InputManager* inputManager = reinterpret_cast<InputManager*>(glfwGetWindowUserPointer(window));
    if (action == GLFW_PRESS && key == GLFW_KEY_Q) {
      inputManager->quitButton = true;
    } else {
      inputManager->quitButton = false;
    }
  }
}
