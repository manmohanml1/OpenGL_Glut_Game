#include "_health.h"

_health::_health()
{
    //ctor
    vert[0].x=-0.5;vert[0].y=-0.5;vert[0].z= -1;
    vert[1].x=0.5;vert[1].y=-0.5;vert[1].z= -1;
    vert[2].x=0.5;vert[2].y=0.5;vert[2].z= -1;
    vert[3].x=-0.5;vert[3].y=0.5;vert[3].z= -1;
}

_health::~_health()
{
    //dtor
}
void _health::healthInit(int U)
{
    if(U == 0)//1st Health bar
 {
     healthPos[U].x = -4.1; healthPos[U].y = 2.25;  healthPos[U].z = -1.0;
     healthScale[U].x = 0.3; healthScale[U].y = 0.3; healthScale[U].z = 1.0;
 }  else if(U == 1)//2nd Health bar
 {
     healthPos[U].x = -3.7; healthPos[U].y = 2.25;  healthPos[U].z = -1.0;
     healthScale[U].x = 0.3; healthScale[U].y = 0.3; healthScale[U].z = 1.0;
 } else if(U == 2)//3rd Health bar
 {
     healthPos[U].x = -3.3; healthPos[U].y = 2.25;  healthPos[U].z = -1.0;
     healthScale[U].x = 0.3; healthScale[U].y = 0.3; healthScale[U].z = 1.0;
 }
     xMin=0; xMax=1; yMin=0; yMax=1;
}

void _health::drawHlth(int U)
{
    glLoadIdentity();
    glTranslatef(healthPos[U].x,healthPos[U].y,healthPos[U].z);
    glScalef(healthScale[U].x,healthScale[U].y,healthScale[U].z);
    glBegin(GL_QUADS);
        glTexCoord2f(xMin,yMax);
        glVertex3f(vert[0].x,vert[0].y,vert[0].z);
        glTexCoord2f(xMax,yMax);
        glVertex3f(vert[1].x,vert[1].y,vert[1].z);
        glTexCoord2f(xMax,yMin);
        glVertex3f(vert[2].x,vert[2].y,vert[2].z);
        glTexCoord2f(xMin,yMin);
        glVertex3f(vert[3].x,vert[3].y,vert[3].z);
    glEnd();
}
