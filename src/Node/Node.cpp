//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#include "Node.h"
#include <cassert>
#include <algorithm>

namespace cure2d {

  Node::Node() {
    m_parent = nullptr;
  }
  
  void Node::addChild(Node* node) {
    assert(node != this && "A node cannot add as a child itself");
    assert(node->getParent() == nullptr && "The node is already in hierarchy");
    m_children.push_back(node);
    node->m_parent = this;
  }

  void Node::removeChild(Node* node) {    
    m_children.erase(std::remove(m_children.begin(), m_children.end(), node), m_children.end());
    node->m_parent = nullptr;
  }
  
  void Node::removeFromParent() {
    m_parent->removeChild(this);
  }

  Node* Node::getParent() const {
    return m_parent;
  }

  void Node::update(float deltaTime) {
    for (const auto &updatable : m_children) {
      updatable->update(deltaTime);
    }
  }

  void Node::draw() {
    for (const auto &drawable : m_children) {
      drawable->draw();
    }
  }

  Node::~Node() {

  }
  
}  // namespace cure2d
