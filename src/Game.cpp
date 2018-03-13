//
//  Copyright Kenjaev Olimjon 03/12/2018
//

#include "Game.h"

namespace cure2d {

  Game::Game():m_window(new Window), m_inputManager(new InputManager(m_window)) {}

  void Game::run() {
    while(!m_window->closed() && !m_inputManager->isQuitButtonPressed()) {
      m_window->clear();

      m_window->update();
    }
  }

  Game::~Game() {
    delete m_inputManager;
    m_inputManager = nullptr;

    delete m_window;
    m_window = nullptr;
  }
  
}  // namespace cure2D
