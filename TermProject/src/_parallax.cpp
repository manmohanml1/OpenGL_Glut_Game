#include "_parallax.h"

_parallax::_parallax()
{
    //ctor
    xMax = yMax =1.0f;
    xMin = yMin =0.0f;
}

_parallax::~_parallax()
{
    //dtor
}

void _parallax::renderBack(float width, float height)
{
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_POLYGON); // type I want to draw
    glTexCoord2f(xMin,yMax);
    glVertex3f(-width/height,-1,-8.0);        // coordinates x, y ,z
    glTexCoord2f(xMax,yMax);
    glVertex3f(width/height,-1,-8.0);
    glTexCoord2f(xMax,yMin);
    glVertex3f(width/height,1,-8.0);
    glTexCoord2f(xMin,yMin);
    glVertex3f(-width/height,1,-8.0);
    glEnd();
}

void _parallax::parallaxInit(char* filename)
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    plxTexture->loadTexture(filename);
}

void _parallax::scroll(bool autoScroll, string dir, float speed)
{
       if(autoScroll){

        if( dir =="up")
        {
            yMin -=speed;
            yMax -=speed;
        }
        else if(dir =="down")
        {
            yMin +=speed;
            yMax +=speed;
        }
        else if(dir =="left")
        {
            xMin -=speed;
            xMax -=speed;
        }
         else if(dir =="right")
        {
            xMin +=speed;
            xMax +=speed;
        }

       }
}
