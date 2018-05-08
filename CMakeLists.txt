cmake_minimum_required (VERSION 2.6)
project (cure2d)

SET(CMAKE_C_COMPILER "clang")
SET(CMAKE_CXX_COMPILER "clang++")
SET(CMAKE_CXX_STANDARD 17)

add_executable(cure2d
  main.cpp
  src/config.h
  src/cure2d.h
  src/Game.h
  src/Game.cpp
  src/Input/KeyboardInputManager.h
  src/Input/KeyboardInputManager.cpp
  src/Input/InputManager.cpp
  src/Input/InputManager.h
  src/Window.h
  src/Window.cpp
  src/Helper/FPSLimiter.h
  src/Helper/FPSLimiter.cpp
  src/Node/Node.h
  src/Node/Node.cpp
  src/Drawable/Drawable.h
  src/Drawable/Drawable.cpp
  src/Updateable/Updateable.h
  src/Updateable/Updateable.cpp
  src/Math/vec2.h
  ) 

find_package(glfw3 REQUIRED)
include_directories(${GLFW_INCLUDE_DIRS})

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

find_package(GLEW REQUIRED)
include_directories(${GLEW_INCLUDE_DIRS})

if (APPLE)
   find_library(COCOA_LIBRARY Cocoa)
   find_library(OpenGL_LIBRARY OpenGL)
   find_library(IOKIT_LIBRARY IOKit)
   find_library(COREVIDEO_LIBRARY CoreVideo)

   SET(EXTRA_LIBS ${COCOA_LIBRARY} ${OpenGL_LIBRARY} ${IOKIT_LIBRARY} ${COREVIDEO_LIBRARY})

endif (APPLE)

target_link_libraries(cure2d glfw ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} ${EXTRA_LIBS})
