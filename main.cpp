//
// Copyright Olimjon Kenjaev 03/12/2018
//

#include <iostream>
#include "src/cure2d.h"
#include "src/Math/vec2.h"


int main(int argc, char** argv) {

  cure2d::math::vec2<int> vector(1, 2);
  cure2d::math::vec2<int> vector2(2, 1);
  
  std::cout << vector + vector2 << std::endl;
  
  // std::unique_ptr<cure2d::Game> game = std::make_unique<cure2d::Game>(60); 
  // game->run();
  return 0;
}
