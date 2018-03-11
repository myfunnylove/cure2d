#include <iostream>
#include "src/Window.h"

int main(int argc, char** argv) {

  cure2D::Window* window = new cure2D::Window();

  while(!window->closed()) {
    window->clear();

    window->update();
  }

  delete window;
  window = nullptr;
  
  return 0;
}
