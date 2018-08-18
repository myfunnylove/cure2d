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

  void Game::setMainNode(Node* node) {
    m_node = node;
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
    m_node = nullptr;
    
    delete m_inputManager;
    m_inputManager = nullptr;
    
    delete m_window;
    m_window = nullptr;
  }

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
