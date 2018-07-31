//
//  Copyright Olimjon Kenjaev 03/12/2018
//

#include "Game.h"
#include "config.h"
#include "Helper/FPSLimiter.h"
#include <iostream>

namespace cure2d {

  Game::Game():m_window(new Window()),
               m_inputManager(new KeyboardInputManager(m_window)),
               m_node(new Node()) {}

  Game::Game(float framesPerSecond):m_window(new Window()),
                                    m_inputManager(new KeyboardInputManager(m_window)),
                                    m_framesPerSecond(framesPerSecond),
                                    m_node(new Node()){}
  
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
  
  Game::~Game() {
    delete m_node;
    delete m_inputManager;
    delete m_window;
  }

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
