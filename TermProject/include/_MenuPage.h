#ifndef _MENUPAGE_H
#define _MENUPAGE_H

#include<_texture.h>

class _MenuPage
{
    public:
        _MenuPage();
        virtual ~_MenuPage();

        void renderBack(float, float);        //drawing a quad for the background
        void menuPageInit(char*);          //load images in the background

         _texture *menuTex = new _texture();        //creating a pointer for texture

         float xMin, xMax, yMin, yMax;          //texture coordinates

    protected:

    private:
};

#endif // _MENUPAGE_H
