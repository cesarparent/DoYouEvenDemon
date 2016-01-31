//
//  main.m
//  DoYouEvenDemon
//
//  Created by Cesar Parent on 29/01/2016.
//  Copyright © 2016 cesarparent. All rights reserved.
//

#include <Meteor/Meteor.h>
#include "DanceScene.hpp"
#include "CalibrationScene.hpp"
using namespace Meteor;

int main(int argc, char** argv) {
    
    srand((unsigned int)time(nullptr));
    return GameMain<DanceScene>();
}
