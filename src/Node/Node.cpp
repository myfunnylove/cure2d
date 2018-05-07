//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#include "Node.h"
#include <cassert>

namespace cure2d {

  Node::Node() {

  }
  
  void Node::addChild(std::shared_ptr<Node> node) {
    // add child logic
  }

  void Node::removeChild(std::shared_ptr<Node> node) {    
    // remove child logic
  }
  
  void Node::removeFromParent() {
    // remove from parent logic
  }

  std::weak_ptr<Node> Node::getParent() {
    return m_parent;
  }

  void Node::update(float deltaTime) {
    for (auto node : m_children) {
      node->update(deltaTime);
    }
  }

  void Node::draw() {
    for (auto node : m_children) {
      node->draw();
    }
  }

  Node::~Node() {

  }
}  // namespace cure2d
