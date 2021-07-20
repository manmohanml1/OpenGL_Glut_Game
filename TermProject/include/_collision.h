#ifndef _COLLISION_H
#define _COLLISION_H

#include<math.h>
#include<iostream>
#include<conio.h>
#include<_screenSettings.h>
#include<_player.h>
#include<GL/gl.h>
#include<_enemies.h>
#include<_bullet.h>

using namespace std;
class _collision
{
    public:
        _collision();
        virtual ~_collision();

        bool isLinearCollision(float,float);
        bool isCircleRayCollision(float,float,float,float,float);
        bool isCubic(float,float,float,float);
        bool isSphereCollision(float,float, float,float);
        bool isCollisionFloor(float,float,float);


        bool colLeft, colRight, colUp, colBottom;
       // bool isBoundedCollision(_player &,_screenSettings, int, int);
        bool isRadialCollision(_player &,_enemies);
        bool isRadialCollision2(_enemies &,_bullet &);
        bool isBoundedCollision(_player &,_screenSettings *, int, int);
        bool isBoundedCollision2(_enemies ,_screenSettings *, int, int);
        bool isBoundedCollision3(_bullet,_screenSettings *, int, int);
        bool colTrue,colEnmyTrue;

    protected:

    private:
};

#endif // _COLLISION_H
