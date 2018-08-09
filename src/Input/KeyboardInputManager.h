//
// Copyright Olimjon Kenjaev 03/12/2018
//


#ifndef _KEYBOARD_INPUT_MANAGER_H
#define _KEYBOARD_INPUT_MANAGER_H

#include "InputManager.h"
#include "../Window.h"
#include <array>
#include <memory>

#define INPUT_MANAGER_MAX_NUM_KEYS 1024

namespace cure2d {

  class KeyboardInputManager : public InputManager {
  public:
    explicit KeyboardInputManager(Window* window);
    ~KeyboardInputManager();

    // Temporary: just for quick quit. 
    bool isQuitButtonPressed() override;

    bool isUpButtonPressed() override;
    bool isDownButtonPressed() override;
    bool isLeftButtonPressed() override;
    bool isRightButtonPressed() override;
    bool isActionButtonPressed() override;
    bool isEditButtonPressed() override;
  private:
    friend void keyboard_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    std::array<bool, INPUT_MANAGER_MAX_NUM_KEYS> keys{false};
  };

}  // namespace cure2D

#endif  // _KEYBOARD_INPUT_MANAGER_H
