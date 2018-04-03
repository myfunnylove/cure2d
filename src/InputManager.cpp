//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include "InputManager.h"
#include <GLFW/glfw3.h>

namespace cure2d {

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
  
  InputManager::InputManager(std::unique_ptr<Window> &window) {
    keys = new std::array<bool, INPUT_MANAGER_MAX_NUM_KEYS>();

    for (bool &key : *keys) {
      key = false;
    }
    
    auto glfwWindow = window->getGLFWwindow();
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

  bool InputManager::isEditButtonPressed() {
    return keys->at(GLFW_KEY_E);
  }
  
  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    auto inputManager = reinterpret_cast<InputManager*>(glfwGetWindowUserPointer(window));
    inputManager->keys->at(key) = action == GLFW_PRESS;
  }
}
