#ifndef _BULLET_H
#define _BULLET_H

#include<iostream>
#include<_common.h>
#include<_texture.h>
#include<GL/gl.h>

using namespace std;

class _bullet
{
    public:
        _bullet();
        virtual ~_bullet();
        vec3 bulletPos; //Bullet position settings tile -[], no. of instances -[]
        vec3 bulletScale; //Scene's size cloud tile scale[], no no. of instances
        vec3 vert[4]; //Rectangle that we draw scene tools on

        void bulletInit(int); //Initialization of the player
        void drawBlt(); //Rendering the Scene
        void action();

        float xMin, xMax, yMin, yMax;
        //bool colLeft, colRight, colUp, colBottom;
        _texture *bulletImg = new _texture();
        int xFrame;
        float radius;
        bool shoot, colTile, bltDir = true;

    protected:

    private:
};

#endif // _BULLET_H
