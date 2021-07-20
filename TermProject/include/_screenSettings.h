#ifndef _SCREENSETTINGS_H
#define _SCREENSETTINGS_H

#include<iostream>
#include<_common.h>
#include<_texture.h>
#include<GL/gl.h>

using namespace std;


class _screenSettings
{
    public:
        _screenSettings();
        virtual ~_screenSettings();

        vec3 scenePos[7][7]; //Scene position settings cloud,width tile -[], no. of instances -[]
        vec3 sceneScale[7]; //Scene's size cloud tile scale[], no no. of instances
        vec3 vert[4]; //Rectangle that we draw scene tools on

        void sceneInit(int,int); //Initialization of the player
        void drwScn(int,int); //Rendering the Scene

        float xMin, xMax, yMin, yMax;
        bool colLeft, colRight, colUp, colBottom;
        _texture *sceneImg = new _texture();
        int level =0;

    protected:

    private:
};

#endif // _SCREENSETTINGS_H
