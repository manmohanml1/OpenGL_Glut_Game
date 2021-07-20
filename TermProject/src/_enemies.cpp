#include "_enemies.h"

#define YSCREEN 1.8
#define XSCREEN 3.8
_enemies::_enemies()
{
    //ctor
    vert[0].x=-0.5;vert[0].y=-0.5;vert[0].z=0.0;
    vert[1].x=0.5;vert[1].y=-0.5;vert[1].z=0.0;
    vert[2].x=0.5;vert[2].y=0.5;vert[2].z=0.0;
    vert[3].x=-0.5;vert[3].y=0.5;vert[3].z=0.0;
    radius = 1.0*0.2;
}

_enemies::~_enemies()
{
    //dtor
}
void _enemies::enemyInit(float X, float Y,float xPosition,float yPosition)
{
    enemyPos.x=xPosition;
    enemyPos.y=yPosition+0.025;
    enemyPos.z=-2.0;

    enemyScale.x=0.6;
    enemyScale.y=0.6;
    enemyScale.z=1.0;

    framesX=X;
    framesY=Y;

    xMin=1.0/framesX;
    xMax=0.0;
    yMin=2.0/framesY;
    yMax=1.0;
}

void _enemies::drawEnemy()
{
    glLoadIdentity();
    glTranslatef(enemyPos.x,enemyPos.y,enemyPos.z);
    glScalef(enemyScale.x,enemyScale.y,enemyScale.z);
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

void _enemies::actions()
{
    if(spriteChangeEnm==1)
    {
        enemyScale.x=0.6;
        enemyScale.y=0.6;
        yMin=0;
        yMax=1.0/framesY;
        if(xMin<7/framesX)
        {
            xMin += 1/framesX;
            xMax += 1/framesX;
        } else
        {
            xMin=1.0/framesX;
            xMax=0.0;
        }
    } else if(spriteChangeEnm==2)
    {
        enemyScale.x=0.7;
        enemyScale.y=0.7;
        yMin=(1.0/framesY) +0.05;
        yMax=2.0/framesY - 0.05;
        xMin += 1/framesX;
        xMax += 1/framesX;
        if(xMax>=1.0)
        {
            if(level1)
            {
                enemyPos.x=3.8;
                enemyPos.y=2.15;
            } else if(level2)
            {
                enemyPos.x=3.8;
                enemyPos.y=2.05;
            } else if(level3)
            {
                enemyPos.x=3.8;
                enemyPos.y=1.95;
            }
        }
    } else if(spriteChangeEnm==3)
    {
        enemyScale.x=0.6;
        enemyScale.y=0.6;
        if(xMin<9/framesX)
        {
            xMin += 1/framesX;
            xMax += 1/framesX;
        } else
        {
            yMin=2.0/framesY;
            yMax=1.0;
            xMin=1.0/framesX;
            xMax=0.0;
        }
    }

}

void _enemies::autoScroll()
{
    if(enemyPos.x <= -4.2)
    {
        enemyPos.x = 3.8;
        enemyPos.y = 2.15;
        dir = 1;
    }
    else if(dir == 1)// 1 is true
    {
        enemyPos.x -=0.003;
    }

}
void _enemies::autoScrollCol()
{
       if(!colEnmTrue||colEnmRight||colEnmBottom||colEnmLeft)
       {
           if(enemyPos.y <= -2.2)
    {
        enemyPos.y = 2.15;
    }
    else
    {
        enemyPos.y -=0.003;
    }
       }
}
