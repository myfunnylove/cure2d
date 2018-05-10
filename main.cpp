//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include <iostream>
#include "src/cure2d.h"

int main(int argc, char** argv) {
  std::unique_ptr<cure2d::Game> game = std::make_unique<cure2d::Game>(60); 
  game->run();
  return 0;
}
