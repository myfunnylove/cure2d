//
// Copyright Kenjaev Olimjon 03/12/2018
//

#include <iostream>
#include "src/cure2D.h"

int main(int argc, char** argv) {

  cure2D::Game* game = new cure2D::Game();

  game->run();

  delete game;
  game = nullptr;

  return 0;
}
