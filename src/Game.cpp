//
//  Copyright Olimjon Kenjaev 03/12/2018
//

#include "Game.h"
#include "config.h"
#include "Helper/FPSLimiter.h"
#include <iostream>

namespace cure2d {

  Game::Game():m_window(std::make_unique<Window>()),
               m_inputManager(std::make_unique<KeyboardInputManager>(m_window)),
               m_node(std::make_unique<Node>()) {}

  Game::Game(float framesPerSecond):m_window(std::make_unique<Window>()),
                                    m_inputManager(std::make_unique<KeyboardInputManager>(m_window)),
                                    m_framesPerSecond(framesPerSecond),
                                    m_node(std::make_unique<Node>()){}
  
  void Game::setFramesPerSecond(float framesPerSecond) {
    m_framesPerSecond = framesPerSecond;
  }
  
  void Game::run() {
    FPSLimiter fpsLimiter;
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
    m_node->update(deltaTime);
  }

  void Game::render() {
    m_node->draw();
  }
  
  Game::~Game() {}

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
