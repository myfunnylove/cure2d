#include "Window.h"
#include <iostream>

namespace cure2D {

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

  bool Window::closed() {
    return glfwWindowShouldClose(m_window);
  }
  
  void Window::clear() {
    
  }

  void Window::update() {
    glfwSwapBuffers(m_window);
    glfwPollEvents();
  }

  Window::~Window() {
    glfwDestroyWindow(m_window);
    glfwTerminate();
  }

}
