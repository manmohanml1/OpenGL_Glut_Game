#ifndef _HEALTH_H
#define _HEALTH_H

#include<iostream>
#include<_common.h>
#include<_texture.h>
#include<GL/gl.h>

using namespace std;

class _health
{
    public:
        _health();
        virtual ~_health();
        vec3 healthPos[3]; //Health tile -[], no. of instances -[]
        vec3 healthScale[3]; //Health tile scale[], no no. of instances
        vec3 vert[4]; //Rectangle that we draw scene tools on

        void healthInit(int); //Initialization of the health tile
        void drawHlth(int); //Rendering the health tile

        float xMin, xMax, yMin, yMax;
        //bool colLeft, colRight, colUp, colBottom;
        _texture *healthImg = new _texture();

    protected:

    private:
};

#endif // _HEALTH_H
