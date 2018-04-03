//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include <iostream>
#include "src/cure2d.h"

int main(int argc, char** argv) {
  std::unique_ptr<cure2d::Game> game(new cure2d::Game());
  game->run();
  return 0;
}
