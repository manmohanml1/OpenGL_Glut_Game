#include "_bullet.h"

_bullet::_bullet()
{
    //ctor
    vert[0].x=-0.5;vert[0].y=-0.5;vert[0].z= -1;
    vert[1].x=0.5;vert[1].y=-0.5;vert[1].z= -1;
    vert[2].x=0.5;vert[2].y=0.5;vert[2].z= -1;
    vert[3].x=-0.5;vert[3].y=0.5;vert[3].z= -1;
    radius = 0.25*0.2;
}

_bullet::~_bullet()
{
    //dtor
}
void _bullet::bulletInit(int F)
{
     //bulletPos.x = -2.9; bulletPos.y = +0.75;
     bulletPos.z = -1.0;
     bulletScale.x = 0.25; bulletScale.y = 0.25; bulletScale.z = 1.0;
     xFrame= F;
     xMin=0.0; xMax=1.0/xFrame; yMin=0.0; yMax=1.0;

}

void _bullet::action()
{
       if(bltDir)
       {
           if(bulletPos.x<6.0)
        {
            bulletPos.x+=0.15;
            xMin += 1.0/xFrame;
            xMax += 1.0/xFrame;
        }
       } else
       {
           if(bulletPos.x<6.0)
        {
            bulletPos.x-=0.15;
            xMin += 1.0/xFrame;
            xMax += 1.0/xFrame;
        }
       }


}

void _bullet::drawBlt()
{
    glLoadIdentity();
    glTranslatef(bulletPos.x,bulletPos.y,bulletPos.z);
    glScalef(bulletScale.x,bulletScale.y,bulletScale.z);
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
