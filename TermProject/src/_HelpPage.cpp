#include "_HelpPage.h"

_HelpPage::_HelpPage()
{
    //ctor
    xMin = 0.0;
    xMax = 1.0;
    yMin = 1.0;
    yMax = 0.0;

}

_HelpPage::~_HelpPage()
{
    //dtor
}

void _HelpPage::renderBack(float width, float height)
{
    glColor3f(1.0,1.0,1.0);
    helpTex->textureBinder();     //binding the texture
    glBegin(GL_POLYGON);

    glTexCoord2f(xMin, yMin);
    glVertex3f(-width/height, -1.0, -70.0);
    glTexCoord2f(xMax, yMin);
    glVertex3f(width/height, -1.0, -70.0);
    glTexCoord2f(xMax, yMax);
    glVertex3f(width/height, 1.0, -70.0);
    glTexCoord2f(xMin, yMax);
    glVertex3f(-width/height, 1.0, -70.0);

    glEnd();
}

void _HelpPage::helpPageInit(char* fileName)
{
     helpTex->loadTexture(fileName);
}
