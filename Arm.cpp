//
//  Arm.cpp
//
//  Created by Hans Dulimarta on 02/18/13.
//
//

#include "Cylinder.h"
#include "Arm.h"
const float LENGTH = 10;
Arm::Arm()
{

}

Arm::~Arm()
{
    //gluDeleteQuadric(cyl_quad);
}

void Arm::build()
{
    cyl.build(0.5, 0.5, LENGTH);
    //gluCylinder(cyl_quad, 0.2, 0.2, LENGTH, 20, 25);
    //glEndList();
}

void Arm::render() const
{
    glPushMatrix();
    glTranslatef (0, 0, -LENGTH/2);
    glPushMatrix();
    cyl.render();
    glPopMatrix();
}

float Arm::length() const {
    return LENGTH;
}
