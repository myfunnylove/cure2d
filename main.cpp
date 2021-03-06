//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include <iostream>
#include "src/cure2d.h"

int main(int argc, char** argv) {
  cure2d::Game* game = new cure2d::Game();

  cure2d::Node* main_node = new cure2d::Node();
  game->setMainNode(main_node);

  game->run();
  
  delete game;
  game = nullptr;
  
  return 0;
}
