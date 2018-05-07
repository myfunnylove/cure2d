//
//  Copyright 06/05/2018 Olimjon Kenjaev
//

#ifndef _NODE_
#define _NODE_

#include <vector>
#include <memory>
#include "../Updateable/Updateable.h"
#include "../Drawable/Drawable.h"

namespace cure2d {

  class Node : public Updateable, public Drawable {
  private:
    std::weak_ptr<Node> m_parent;
    std::vector<std::shared_ptr<Node>> m_children;

    void removeChild(std::shared_ptr<Node> node);
  public:
    std::weak_ptr<Node> getParent();
    Node();

    void addChild(std::shared_ptr<Node> node);
    void removeFromParent();

    void update(float deltaTime) override;
    void draw() override;

    ~Node() override;
  };
  
  
}  // namespace cure2d


#endif  // _NODE_
