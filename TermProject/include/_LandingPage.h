#ifndef _LANDINGPAGE_H
#define _LANDINGPAGE_H

#include <_texture.h>

class _LandingPage
{
    public:
        _LandingPage();
        virtual ~_LandingPage();

        void renderBack(float, float);        //drawing a quad in the background
        void landingPageInit(char*);           //load images in the background
        void scroll(bool, string, float);

        _texture *landTex = new _texture();   //creating pointer for texture

        float xMin, xMax, yMin, yMax;         //texture coordinates

    protected:

    private:
};

#endif // _LANDINGPAGE_H
