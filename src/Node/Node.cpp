//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#include "Node.h"
#include <cassert>

namespace cure2d {

  Node::Node() {
    m_parent = nullptr;
  }
  
  void Node::addChild(Node* node) {
    m_children.push_back(node);
    node->m_parent = this;
  }

  void Node::removeChild(Node* node) {
    assert(node->m_parent == this);
    
    std::vector<Node*>::iterator potentialIterator;
    
    for (auto it = m_children.begin(); it !=  m_children.end(); it++) {
      if (node == *it) {
	potentialIterator = it;
	break;
      }
    }

    m_children.erase(potentialIterator);
    node->m_parent = nullptr;
  }
  
  void Node::removeFromParent() {
    assert(m_parent != nullptr);

    m_parent->removeChild(this);
  }

  Node* Node::getParent() {
    return m_parent;
  }
}  // namespace cure2d
