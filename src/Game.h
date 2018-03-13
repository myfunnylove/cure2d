//
//  Copyright Olimjon Kenjaev 03/12/2018 
//

#ifndef _GAME_2D_H_
#define _GAME_2D_H_

#include "Window.h"
#include "InputManager.h"

namespace cure2d {

  class Game {
  public:
    Game();
    void run();
    ~Game();
  private:
    Window* m_window;
    InputManager* m_inputManager;
  };

}  // namespace cure2D

#endif  // _GAME_2D_H_
