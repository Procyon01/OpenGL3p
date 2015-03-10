#ifndef HANS_WHEEL_H
#define HANS_WHEEL_H

#include <GL/glew.h>
#include "Torus.h"

/* Wheel : torus  + spokes */
class Wheel {
   public:
      /* default size is unit box */
      Wheel();
      void build();
      void render() const;
      GLfloat getRadius() const { return radius; }
      GLfloat getThickness() const { return tire_thickness; }
   private:
      GLfloat radius;
      GLfloat tire_thickness;
      GLUquadric *spoke;
      GLint list_id;
      Torus t;
};
#endif
