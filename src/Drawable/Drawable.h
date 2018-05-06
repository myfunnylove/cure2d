//
//  Copyright 05/06/2018
//

#ifndef _DRAWABLE_
#define _DRAWABLE_

namespace cure2d {

  class Drawable {
  private:
    Drawable() = default;
  public:
    virtual void draw()=0;
  };
  
};  // namespace cure2d


#endif  // _DRAWABLE_
