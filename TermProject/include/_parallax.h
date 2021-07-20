#ifndef _PARALLAX_H
#define _PARALLAX_H

#include<string>
#include<GL/gl.h>
#include<_texture.h>

using namespace std;

class _parallax
{
    public:
        _parallax();
        virtual ~_parallax();
        void renderBack(float,float);
        void parallaxInit(char *);
        void scroll(bool,string,float);

        float xMax,xMin,yMax,yMin;
        _texture *plxTexture = new _texture();

    protected:

    private:
};

#endif // _PARALLAX_H
