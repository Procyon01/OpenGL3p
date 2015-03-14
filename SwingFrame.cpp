#include "SwingFrame.h"

void SwingFrame::build() {
    pipe.build();
    elbow.build(2, .5, 10, 20, 90);
}

void SwingFrame::render() const {
    static float COPPER_AMBIENT[] = {0.191250, 0.073500, 0.022500, 1.000000};
    static float COPPER_DIFFUSE[] = {0.703800, 0.270480, 0.082800, 1.000000};
    static float COPPER_SPECULAR[] = {0.256777, 0.137622, 0.086014, 1.000000};

    glMaterialfv(GL_FRONT, GL_AMBIENT, COPPER_AMBIENT);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, COPPER_DIFFUSE);
    glMaterialfv(GL_FRONT, GL_SPECULAR, COPPER_SPECULAR);
    glMaterialf(GL_FRONT, GL_SHININESS, 12.8);
    glPushMatrix();
    glRotatef (90, 1, 0, 0);
    glScalef (1.75, 1.75, 10);
    pipe.render();
    glPopMatrix();
};
