//
//  Copyright Olimjon Kenjaev 03/12/2018 
//

#ifndef _GAME_2D_H_
#define _GAME_2D_H_

#include "Window.h"
#include "InputManager.h"
#include <chrono>

namespace cure2d {

  class Game {
  public:
    Game();
    Game(int framesPerSecond);
    void run();
    virtual ~Game();

    void setFramesPerSecond(int framePerSecond);
  protected:
    virtual void processInput();
    virtual void update(std::chrono::milliseconds deltaTime);
    virtual void render();
  private:
    int m_framesPerSecond;
    std::unique_ptr<Window> m_window;
    std::unique_ptr<InputManager> m_inputManager;
  };

}  // namespace cure2D

#endif  // _GAME_2D_H_

