//
//  DanceScene.hpp
//  DoYouEvenDemon
//
//  Created by Cesar Parent on 30/01/2016.
//  Copyright (c) 2016 PixelSpark. All rights reserved.
//
#ifndef DanceScene_hpp
#define DanceScene_hpp

#include <Meteor/Meteor.h>
#include "beatController.hpp"
using namespace Meteor;

class DanceScene : public Scene, public ControlsDelegate {
public:
    
    // MARK: Scene Cleanup
    
    virtual ~DanceScene();
    
    // MARK: Game management and logic
    
    void didMoveToView() override;
    
    void update(double delta) override;
    
    // MARK: Control Delegate
    
    void keyDown(Key aKey) override;
    
};

#endif /* DanceScene_hpp */