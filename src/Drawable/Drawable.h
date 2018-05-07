//
//  Copyright 05/06/2018
//

#ifndef _DRAWABLE_
#define _DRAWABLE_

namespace cure2d {

  class Drawable {
  public:
    Drawable() = default;
    virtual void draw() = 0;
    virtual ~Drawable() = 0;
  };
  
};  // namespace cure2d


#endif  // _DRAWABLE_
