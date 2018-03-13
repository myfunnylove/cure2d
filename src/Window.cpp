//
// Copyright Kenjaev Olimjon 03/12/2018
//

#include "Window.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <iostream>

namespace cure2d {

  Window::Window() : m_windowTitle("cure2d"), m_width(800), m_height(600) {
    setupEnvironment();
  }

  void Window::setupEnvironment() {
    if (!glfwInit()) {
      std::cout << "Failed to initialize glfw" << std::endl;
      return;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    m_window = glfwCreateWindow(m_width, m_height, m_windowTitle.c_str(), nullptr, nullptr);
    glfwMakeContextCurrent(m_window);
    glViewport(0, 0, m_width, m_height);
    
    GLenum error = glewInit();

    if (error != GLEW_OK) {
      std::cout << "Failed to initialize glew" << std::endl;
      return;
    }
    
    std::cout << glGetString(GL_VERSION) << std::endl; 
  }
  
  GLFWwindow* Window::getGLFWwindow() {
    return m_window;
  }
  
  bool Window::closed() const {
    return glfwWindowShouldClose(m_window);
  }
  
  void Window::clear() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
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
