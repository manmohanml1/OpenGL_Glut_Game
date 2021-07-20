#include "_fallingObject.h"
#include <bits/stdc++.h>
#include <stdlib.h>     // rand


#define YSCREEN 0.8
#define XSCREEN 2.8

_fallingObject::_fallingObject()
{
    //ctor

    vert[0].x=-0.5;vert[0].y=-0.5;vert[0].z=0.0;
    vert[1].x=0.5;vert[1].y=-0.5;vert[1].z=0.0;
    vert[2].x=0.5;vert[2].y=0.5;vert[2].z=0.0;
    vert[3].x=-0.5;vert[3].y=0.5;vert[3].z=0.0;

    radius = 0.5*0.15;
    objSpeed = 0.0009;

}
void _fallingObject::objInit(float X, float Y,float scaleSize, bool level1, bool level2, bool level3)
{
    if(level1)
    {
        objPosition.x = (XSCREEN - (-XSCREEN)) * ((((float) rand()) / (float) RAND_MAX)) + (-XSCREEN) ;
    }
    else if(level2)
    {
        objPosition.x = (2*XSCREEN - (-XSCREEN)) * ((((float) rand()) / (float) RAND_MAX)) + (-XSCREEN) ;
        xSpeed = 0.0009;
    }
    else if(level3)
    {
        objPosition.x = (2*XSCREEN - (-2*XSCREEN)) * ((((float) rand()) / (float) RAND_MAX)) + (-2*XSCREEN) ;
        int flag = rand() % 2;
        if(flag == 0)
        {
            xSpeed = 0.0009;
        }
        else if(flag == 1)
        {
            xSpeed = -0.0009;
        }
    }
    objPosition.y = (YSCREEN*3 - (YSCREEN)) * ((((float) rand()) / (float) RAND_MAX)) + (YSCREEN) ;

    objPosition.z = -2.0;

    objSize.x = objSize.y  = scaleSize;
    objSize.z = 1.0;

    framesX = X;
    framesY = Y;
    xMin=0.0;
    xMax=1.0/framesX;
    yMin=0.0;
    yMax=1.0/framesY;
    objActive = true;
}

_fallingObject::~_fallingObject()
{
    //dtor
}
void _fallingObject::drawObj(bool level1, bool level2, bool level3)
{
    if((objPosition.y < -YSCREEN) || (objPosition.y > YSCREEN*2))
    {
        objPosition.y = (YSCREEN*3 - (YSCREEN)) * ((((float) rand()) / (float) RAND_MAX)) + (YSCREEN) ;
        objSpeed = 0.0009;
        objActive = true;
    }
    if((objPosition.x < -XSCREEN*2) || (objPosition.x > XSCREEN*2))
    {
        if(level1)
        {
            objPosition.x = (1.2 - (-1.2)) * ((((float) rand()) / (float) RAND_MAX)) + (-1.2) ;
        }
        else if(level2)
        {
            objPosition.x = (2.4 - (-1.2)) * ((((float) rand()) / (float) RAND_MAX)) + (-1.2) ;
        }
        else if(level3)
        {
            objPosition.x = (2.4 - (-2.4)) * ((((float) rand()) / (float) RAND_MAX)) + (-2.4) ;
        }
        objPosition.y = (YSCREEN*3 - (YSCREEN)) * ((((float) rand()) / (float) RAND_MAX)) + (YSCREEN) ;
    }
    glTranslatef(objPosition.x,objPosition.y,objPosition.z);
    glScalef(objSize.x,objSize.y,objSize.z);
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


void _fallingObject::objFallingAction(bool level1, bool level2, bool level3)
{
    if(objTimer->getTicks() > 50)
    {

        xMin += 1.0/framesX;
        xMax += 1.0/framesX;
        if(fmod(xMin,1.0) == 0.0)
        {
            yMin += 1.0/framesY;
            yMax += 1.0/framesY;
        }

        objTimer->resetTime();
    }
    objPosition.y -= objSpeed;

    if(level2 || level3)
    {
        objPosition.x -= xSpeed;
    }

}

