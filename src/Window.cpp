//
// Copyright Kenjaev Olimjon 03/12/2018
//

#include "Window.h"
#include <iostream>

namespace cure2d {

  Window::Window() : m_windowTitle("cure2D"), m_width(800), m_height(600) {
    setupEnvironment();
  }

  void Window::setupEnvironment() {
    if (!glfwInit()) {
      std::cout << "Failed to initialize glfw" << std::endl;
      return;
    }

    m_window = glfwCreateWindow(m_width, m_height, m_windowTitle.c_str(), nullptr, nullptr);
    
    glfwMakeContextCurrent(m_window);
  }
  
  GLFWwindow* Window::getGLFWwindow() {
    return m_window;
  }
  
  bool Window::closed() const {
    return glfwWindowShouldClose(m_window);
  }
  
  void Window::clear() {
    
  }

  void Window::update() const {
    glfwSwapBuffers(m_window);
    glfwPollEvents();
  }

  Window::~Window() {
    glfwDestroyWindow(m_window);
    glfwTerminate();
  }

}
