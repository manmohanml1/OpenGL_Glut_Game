#ifndef _TEXTURE_H
#define _TEXTURE_H

#include<SOIL.h>
#include<GL/gl.h>
#include<iostream>

using namespace std;

class _texture
{
    public:
        _texture();
        virtual ~_texture();
        void loadTexture(char *);
        unsigned char * image;
        int width, height;
        GLuint tex;
        void textureBinder();

    protected:

    private:
};

#endif // _TEXTURE_H
