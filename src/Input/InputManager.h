//
//  Copyright Olimjon Kenjaev 05/06/2018
//

#ifndef _INPUT_MANAGER_
#define _INPUT_MANAGER_

namespace cure2d {

  class InputManager {
    
  public:
    virtual bool isQuitButtonPressed() = 0;
    virtual bool isUpButtonPressed() = 0;
    virtual bool isDownButtonPressed() = 0;
    virtual bool isLeftButtonPressed() = 0;
    virtual bool isRightButtonPressed() = 0;
    virtual bool isActionButtonPressed() = 0;
    virtual bool isEditButtonPressed() = 0;

    virtual ~InputManager();
  };

  
}  // namespace cure2d

#endif  // _INPUT_MANAGER_
