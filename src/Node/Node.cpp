//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#include "Node.h"
#include <cassert>
#include <algorithm>
#include <iostream>

namespace cure2d {
  
  Node::Node() {
    m_parent = nullptr;
  }

  Node::Node(const Node& node) : m_parent(node.m_parent) {
    std::cout << "Calling copy constructor" << std::endl;
    for (auto child : node.m_children) {
      auto localNode = new Node(*child);
      addChild(localNode);
    }

    if (m_parent) {
      m_parent->addChild(this);
    }
  }

  Node& Node::operator=(const Node& node) {
    for (auto child : m_children) {
      delete child;
    }
    m_children.clear();
    m_parent = nullptr;
    
    for (auto child : node.m_children) {
      auto localNode = new Node(*child);
      addChild(localNode);
    }

    m_parent = node.m_parent;
    if (m_parent) {
      m_parent->addChild(this);
    }

    return *this;
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
    for (auto node : m_children) {
      delete node;
    }

    m_children.clear();
  }
  
}  // namespace cure2d
