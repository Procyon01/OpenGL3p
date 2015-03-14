//
//  Arm.cpp
//
//  Created by Hans Dulimarta on 02/18/13.
//
//

#include "Cylinder.h"
#include "Arm.h"
const float LENGTH = 8;
Arm::Arm()
{

}

Arm::~Arm()
{
    //gluDeleteQuadric(cyl_quad);
}

void Arm::build(bool extrem, int len)
{
	if (extrem){		
    	cyl.build(0.9, 0.6, len);
	} else {
		cyl.build(1.0, 0.9, len);
	}
    //gluCylinder(cyl_quad, 0.2, 0.2, LENGTH, 20, 25);
    //glEndList();
}

void Arm::render(bool extrem) const
{
    glPushMatrix();
    glPushMatrix();
	if (extrem){
		glTranslatef(0, 0, -4);
	}
    cyl.render();
    glPopMatrix();
}

float Arm::length() const {
    return LENGTH;
}
