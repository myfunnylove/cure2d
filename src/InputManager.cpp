//
// Copyright Kenjaev Olimjon 03/12/2018
//

#include "InputManager.h"
#include <GLFW/glfw3.h>

namespace cure2D {

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
  
  InputManager::InputManager(Window* window) {
    keys = new std::array<bool, INPUT_MANAGER_MAX_NUM_KEYS>();

    for (bool &key : *keys) {
      key = false;
    }
    
    GLFWwindow* glfwWindow = window->getGLFWwindow();
    glfwSetWindowUserPointer(glfwWindow, this);
    glfwSetKeyCallback(glfwWindow, keyboard_callback);
  }

  InputManager::~InputManager() {
    delete keys;
    keys = nullptr;
  }
  
  bool InputManager::isQuitButtonPressed() {
    return keys->at(GLFW_KEY_Q);
  }

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    InputManager* inputManager = reinterpret_cast<InputManager*>(glfwGetWindowUserPointer(window));
    if (action == GLFW_PRESS) {
      inputManager->keys->at(key) = true;
    } else {
      inputManager->keys->at(key) = false;
    }
  }
}
