//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#include "Node.h"
#include <cassert>
#include <algorithm>

namespace cure2d {

  Node::Node() {

  }
  
  void Node::addChild(Node* node) {
    assert(!isExistsInHierarchy());
    m_children.push_back(node);
  }

  void Node::removeChild(Node* node) {    
    assert(!isExistsInHierarchy());
    m_children.erase(std::remove(m_children.begin(), m_children.end(), node), m_children.end());
  }
  
  void Node::removeFromParent() {
    m_parent->removeChild(this);
  }

  bool Node::isExistsInHierarchy() {
    // TODO: Add the logic here;
    return false;
  }
  
  Node* Node::getParent() {
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
