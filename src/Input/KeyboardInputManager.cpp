//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include "KeyboardInputManager.h"
#include <GLFW/glfw3.h>

namespace cure2d {

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
  
  KeyboardInputManager::KeyboardInputManager(Window* window) {
    keys = new std::array<bool, INPUT_MANAGER_MAX_NUM_KEYS>();

    for (bool &key : *keys) {
      key = false;
    }
    
    auto glfwWindow = window->getGLFWwindow();
    glfwSetWindowUserPointer(glfwWindow, this);
    glfwSetKeyCallback(glfwWindow, keyboard_callback);
  }

  KeyboardInputManager::~KeyboardInputManager() {
    delete keys;
    keys = nullptr;
  }
  
  bool KeyboardInputManager::isQuitButtonPressed() {
    return keys->at(GLFW_KEY_Q);
  }

  bool KeyboardInputManager::isEditButtonPressed() {
    return keys->at(GLFW_KEY_E);
  }
  
  bool KeyboardInputManager::isUpButtonPressed() {
    return false;
  }

  bool KeyboardInputManager::isLeftButtonPressed() {
    return false;
  }

  bool KeyboardInputManager::isRightButtonPressed() {
    return false;
  }

  bool KeyboardInputManager::isDownButtonPressed() {
    return false;
  }

  bool KeyboardInputManager::isActionButtonPressed() {
    return false;
  }
  
  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    auto inputManager = reinterpret_cast<KeyboardInputManager*>(glfwGetWindowUserPointer(window));
    inputManager->keys->at(key) = action == GLFW_PRESS;
  }
}
