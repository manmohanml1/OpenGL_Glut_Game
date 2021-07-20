#ifndef _CREDITS_H
#define _CREDITS_H

#include<_texture.h>

class _credits
{
    public:
        _credits();
        virtual ~_credits();

        void renderBack(float, float);  //to draw a quad for the background
        void creditsPageInit(char* );   //Load images to background
        void cpscroll(bool, string, float);  //bool for Auto, string for direction, speed of the movement

        _texture *cpTex = new _texture();  //creating pointer for texture loader

        float xMin, xMax, yMin, yMax;  //for texture coordinates


    protected:

    private:
};

#endif // _CREDITS_H
