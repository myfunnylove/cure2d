//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include "KeyboardInputManager.h"
#include <GLFW/glfw3.h>
#include <iostream>

namespace cure2d {

  void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
  
  KeyboardInputManager::KeyboardInputManager(Window* window) {
    auto glfwWindow = window->getGLFWwindow();
    glfwSetWindowUserPointer(glfwWindow, this);
    glfwSetKeyCallback(glfwWindow, keyboard_callback);
  }

  KeyboardInputManager::~KeyboardInputManager() {
  }
  
  bool KeyboardInputManager::isQuitButtonPressed() {
    return keys.at(GLFW_KEY_Q);
  }

  bool KeyboardInputManager::isEditButtonPressed() {
    return keys.at(GLFW_KEY_E);
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
    inputManager->keys.at(key) = action == GLFW_PRESS;
  }
}
