#include "_PopUp.h"

_PopUp::_PopUp()
{
    //ctor
    xMin = 0.0;
    xMax = 1.0;
    yMin = 1.0;
    yMax = 0.0;
}

_PopUp::~_PopUp()
{
    //dtor
}

void _PopUp::renderBack(float width, float height)
{
    glColor3f(1.0,1.0,1.0);
    popUpTex->textureBinder();      //binding the texture
    glBegin(GL_POLYGON);

    glTexCoord2f(xMin, yMin);
    glVertex3f(-width/height, -1.0, -1.0);
    glTexCoord2f(xMax, yMin);
    glVertex3f(width/height, -1.0, -1.0);
    glTexCoord2f(xMax, yMax);
    glVertex3f(width/height, 1.0, -1.0);
    glTexCoord2f(xMin, yMax);
    glVertex3f(-width/height, 1.0, -1.0);

    glEnd();
}

void _PopUp::popUpInit(char* fileName)
{
    //glEnable(GL_BLEND);
    //glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    popUpTex->loadTexture(fileName);
}
