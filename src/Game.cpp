//
//  Copyright Olimjon Kenjaev 03/12/2018
//

#include "Game.h"
#include "config.h"
#include "helper/FPSLimiter.h"
#include <iostream>

namespace cure2d {

  Game::Game():m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<KeyboardInputManager>(m_window)) {}

  Game::Game(float framesPerSecond):m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<KeyboardInputManager>(m_window)), m_framesPerSecond(framesPerSecond) {}
  
  void Game::setFramesPerSecond(float framesPerSecond) {
    m_framesPerSecond = framesPerSecond;
  }
  
  void Game::run() {
    // Temporary just to check gl
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    FPSLimiter fpsLimiter(60.0f/1000.0f);
    fpsLimiter.initialize();
    
    while(!m_window->closed() && !m_inputManager->isQuitButtonPressed()) { 
      fpsLimiter.start();
      m_window->clear();
      
      processInput();
      update(fpsLimiter.getElapsedTime());
      render();
      
      m_window->update();

      fpsLimiter.finish();
    }
    
  }

  void Game::update(float deltaTime) {
    // std::cout << deltaTime << std::endl; 
  }

  void Game::render() {

  }
  
  Game::~Game() {}

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
