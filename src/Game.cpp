//
//  Copyright Olimjon Kenjaev 03/12/2018
//

#include "Game.h"
#include "config.h"

namespace cure2d {

  Game::Game():m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<KeyboardInputManager>(m_window)) {}

  Game::Game(float framesPerSecond):m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<KeyboardInputManager>(m_window)), m_framesPerSecond(framesPerSecond) {}
  
  void Game::setFramesPerSecond(float framesPerSecond) {
    m_framesPerSecond = framesPerSecond;
  }
  
  void Game::run() {
    // Temporary just to check gl
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    
    while(!m_window->closed() && !m_inputManager->isQuitButtonPressed()) { 
      m_window->clear();

      processInput();
      update(0.1f);
      render();
      
      m_window->update();
    }
    
  }

  void Game::update(float deltaTime) {

  }

  void Game::render() {

  }
  
  Game::~Game() {}

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
