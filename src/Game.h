//
//  Copyright Olimjon Kenjaev 03/12/2018 
//

#ifndef _GAME_2D_H_
#define _GAME_2D_H_

#include "Window.h"
#include "Input/KeyboardInputManager.h"
#include "Node/Node.h"

namespace cure2d {

  class Game {
  public:
    Game();
    Game(float framesPerSecond);
    void run();
    virtual ~Game();

    void setFramesPerSecond(float framePerSecond);
  protected:
    virtual void processInput();
    virtual void update(float deltaTime);
    virtual void render();
  private:
    float m_framesPerSecond;
    Node* m_node;
    Window* m_window;
    InputManager* m_inputManager;
  };

}  // namespace cure2D

#endif  // _GAME_2D_H_x

