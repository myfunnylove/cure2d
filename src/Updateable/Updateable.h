//
//  Copyright 05/06/2018
//

#ifndef _UPDATEABLE_
#define _UPDATEABLE_

namespace cure2d {

  class Updateable {
  private:
    Updateable() = default;
  public:
    virtual void update(float deltaTime)=0;
  };
  
}  // namespace cure2d


#endif  // _UPDATEABLE_
