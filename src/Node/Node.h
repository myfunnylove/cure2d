//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#ifndef _NODE_
#define _NODE_

#include <vector>
#include <memory>

namespace cure2d {

  class Node {
  private:
    Node* m_parent;
    std::vector<Node*> m_children;

    void removeChild(Node* node);
  public:
    Node* getParent();
    Node();

    void addChild(Node* node);
    void removeFromParent();
  };
  
  
}  // namespace cure2d


#endif  // _NODE_
