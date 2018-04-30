//
//  Copyright Olimjon Kenjaev 03/12/2018
//

#include "Game.h"
#include "config.h"
#include <thread>

namespace cure2d {

  Game::Game():m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<InputManager>(m_window)) {}

  Game::Game(int framesPerSecond):m_window(std::make_unique<Window>()), m_inputManager(std::make_unique<InputManager>(m_window)), m_framesPerSecond(framesPerSecond) {}
  
  void Game::setFramesPerSecond(int framesPerSecond) {
    m_framesPerSecond = framesPerSecond;
  }
  
  void Game::run() {
    // Temporary just to check gl
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    std::chrono::milliseconds millisecondsPerFrame = std::chrono::milliseconds(1000/m_framesPerSecond); 
    std::chrono::time_point<std::chrono::system_clock> lastTime = std::chrono::system_clock::now();
    
    while(!m_window->closed() && !m_inputManager->isQuitButtonPressed()) {
      std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
      std::chrono::milliseconds elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(lastTime - start); 
      m_window->clear();

      processInput();
      update(elapsed);
      render();
      
      m_window->update();

      lastTime = start;
      
      std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
      std::this_thread::sleep_for(std::chrono::duration_cast<std::chrono::milliseconds>(end - start + millisecondsPerFrame));
    }
    
  }

  void Game::update(std::chrono::milliseconds deltaTime) {

  }

  void Game::render() {

  }
  
  Game::~Game() {}

  void Game::processInput() {
    //input processing
  }
  
}  // namespace cure2D
