#include "Teteras.h"

Teteras::Teteras() {

}

void Teteras::DibujarTeteras(float x, float y, float z, float rotate) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(rotate, 0, 1, 0);
    glutSolidTeapot(0.5);
    glPopMatrix();
}