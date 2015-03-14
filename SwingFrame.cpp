#include "SwingFrame.h"

void SwingFrame::build() {
    pipe.build();
    elbow.build(2, .5, 10, 20, 90);
}

void SwingFrame::render() const {
    static float COPPER_AMBIENT[] = {0.250000, 0.250000, 0.250000, 1.000000};
    static float COPPER_DIFFUSE[] = {0.400000, 0.400000, 0.400000, 1.000000};
    static float COPPER_SPECULAR[] = {0.774597, 0.774597, 0.774597, 1.000000};

    glMaterialfv(GL_FRONT, GL_AMBIENT, COPPER_AMBIENT);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, COPPER_DIFFUSE);
    glMaterialfv(GL_FRONT, GL_SPECULAR, COPPER_SPECULAR);
    glMaterialf(GL_FRONT, GL_SHININESS, 76.800003);
    glPushMatrix();
    glRotatef (90, 1, 0, 0);
    glScalef (1.75, 1.75, 10);
    pipe.render();
    glPopMatrix();
};
