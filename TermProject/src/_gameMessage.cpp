#include "_gameMessage.h"

_gameMessage::_gameMessage()
{
    //ctor
    vert[0].x=-0.5;vert[0].y=-0.5;vert[0].z=0.0;
    vert[1].x=0.5;vert[1].y=-0.5;vert[1].z=0.0;
    vert[2].x=0.5;vert[2].y=0.5;vert[2].z=0.0;
    vert[3].x=-0.5;vert[3].y=0.5;vert[3].z=0.0;
}

_gameMessage::~_gameMessage()
{
    //dtor
}

void _gameMessage::msgInit()
{
    msgSize.x = msgSize.y  = 3.0;
    msgSize.z = 1.0;

}

void _gameMessage::showMessage()
{
    glTranslatef(0.0,0.0,-2.0);
    glScalef(msgSize.x,msgSize.y,msgSize.z);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0,1.0);
    glVertex3f(vert[0].x,vert[0].y,vert[0].z);
    glTexCoord2f(1.0,1.0);
    glVertex3f(vert[1].x,vert[1].y,vert[1].z);
    glTexCoord2f(1.0,0.0);
    glVertex3f(vert[2].x,vert[2].y,vert[2].z);
    glTexCoord2f(0.0,0.0);
    glVertex3f(vert[3].x,vert[3].y,vert[3].z);
    glEnd();
}

