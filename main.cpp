//
// Copyright Kenjaev Olimjon 03/12/2018
//

#include <iostream>
#include "src/Window.h"
#include "src/InputManager.h"

int main(int argc, char** argv) {

  cure2D::Window* window = new cure2D::Window();
  cure2D::InputManager* inputManager = new cure2D::InputManager(window);

  while(!window->closed() && !inputManager->isQuitButtonPressed()) {
    window->clear();

    window->update();
  }

  delete inputManager;
  inputManager = nullptr;
  
  delete window;
  window = nullptr;
  
  return 0;
}
