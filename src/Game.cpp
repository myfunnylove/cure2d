//
//  Copyright Olimjon Kenjaev 03/12/2018
//

#include "Game.h"
#include "config.h"

namespace cure2d {

  Game::Game():m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<InputManager>(m_window)) {}

  void Game::run() {
    // Temporary just to check gl
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    
    while(!m_window->closed() && !m_inputManager->isQuitButtonPressed()) {
      m_window->clear();

      processInput();
      
      m_window->update();
    }
    
  }

  Game::~Game() {}

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
