#ifndef _POPUP_H
#define _POPUP_H

#include<_texture.h>

class _PopUp
{
    public:
        _PopUp();
        virtual ~_PopUp();

        void renderBack(float, float);
        void popUpInit(char*);

        _texture *popUpTex = new _texture();

        float xMin, xMax, yMin, yMax;

    protected:

    private:
};

#endif // _POPUP_H
