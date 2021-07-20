#include "_MenuPage.h"

_MenuPage::_MenuPage()
{
    //ctor
    xMin = 0.0;
    xMax = 1.0;
    yMin = 1.0;
    yMax = 0.0;

}

_MenuPage::~_MenuPage()
{
    //dtor
}

void _MenuPage::renderBack(float width, float height)
{
    glColor3f(1.0,1.0,1.0);
    menuTex->textureBinder();  //texture binding
    glBegin(GL_POLYGON);

    glTexCoord2f(xMin, yMin);
    glVertex3f(-width/height, -1.0, -60.0);
    glTexCoord2f(xMax, yMin);
    glVertex3f(width/height, -1.0, -60.0);
    glTexCoord2f(xMax, yMax);
    glVertex3f(width/height, 1.0, -60.0);
    glTexCoord2f(xMin, yMax);
    glVertex3f(-width/height, 1.0, -60.0);

    glEnd();
}

void _MenuPage::menuPageInit(char* fileName)
{
    menuTex->loadTexture(fileName);     //load image
}
