#include "_LandingPage.h"

_LandingPage::_LandingPage()
{
    //ctor
    xMin = 0.0;
    xMax = 1.0;
    yMin = 1.0;
    yMax = 0.0;
}

_LandingPage::~_LandingPage()
{
    //dtor
}

void _LandingPage::renderBack(float width, float height)
{
    glColor3f(1.0,1.0,1.0);
    landTex->textureBinder();     //binding the texture
    glBegin(GL_POLYGON);

    glTexCoord2f(xMin, yMin);
    glVertex3f(-width/height, -1.0, -80.0);
    glTexCoord2f(xMax, yMin);
    glVertex3f(width/height, -1.0, -80.0);
    glTexCoord2f(xMax, yMax);
    glVertex3f(width/height, 1.0, -80.0);
    glTexCoord2f(xMin, yMax);
    glVertex3f(-width/height, 1.0, -80.0);

    glEnd();
}

void _LandingPage::landingPageInit(char* fileName)
{
    landTex->loadTexture(fileName);

}

void _LandingPage::scroll(bool autoScroll, string dir, float speed)
{
    if(autoScroll)        //to handle automatic movement of the background
    {
        if(dir == "left")     //keyword "left"
        {
            xMin -= speed;
            xMax -= speed;
        }

        if(dir == "right")     //keyword "right"
        {
            xMin += speed;
            xMax += speed;
        }

        if(dir == "up")     //keyword "up"
        {
            yMin -= speed;
            yMax -= speed;
        }

        if(dir == "down")     //keyword "down"
        {
            yMin += speed;
            yMax += speed;
        }

    }
}

