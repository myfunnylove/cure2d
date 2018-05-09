//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include <iostream>
#include "src/cure2d.h"

int main(int argc, char** argv) {

  cure2d::math::vec3<int> vector(1, 2, 1);

  std::cout << vector << std::endl;
  
  // std::unique_ptr<cure2d::Game> game = std::make_unique<cure2d::Game>(60); 
  // game->run();
  return 0;
}
