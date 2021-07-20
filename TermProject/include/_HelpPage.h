#ifndef _HELPPAGE_H
#define _HELPPAGE_H

#include<_texture.h>

class _HelpPage
{
    public:
        _HelpPage();
        virtual ~_HelpPage();

        void renderBack(float, float);      //draw a quad for the background
        void helpPageInit(char*);

        _texture *helpTex = new _texture();     //texture pointer

        float xMin, xMax, yMin, yMax;

    protected:

    private:
};

#endif // _HELPPAGE_H
