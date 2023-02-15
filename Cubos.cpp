#include "Cubos.h"

Cubos::Cubos()
{}
void Cubos::DibujarCubos(float x, float y, float z, float rotate)
{
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(rotate, 0, 0, 1);
    glutSolidCube(0.5);
    glPopMatrix();
}