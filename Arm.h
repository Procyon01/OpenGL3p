//
//  Arm.h
//  Animation
//
//  Created by Hans Dulimarta on 02/18/13.
//
//

#ifndef __Animation__Arm__
#define __Animation__Arm__

#include <iostream>
#include <GL/glew.h>
#include "Cylinder.h"
class Arm  {
public:
    Arm();
    ~Arm();
    void build();
    void render() const;
    float length() const;
private:
    Cylinder cyl;
};
#endif /* defined(__Animation__Arm__) */
