#ifndef _PLAYER_H
#define _PLAYER_H

#include<_common.h>
#include<_texture.h>
#include<_timer.h>

#include<iostream>
#include<GL/gl.h>

using namespace std;

class _player
{
    public:
        _player();
        virtual ~_player();

        enum {STAND, WALK_LEFT, WALK_RIGHT, JUMP, WALK_LEFT_JUMP,WALK_RIGHT_JUMP, DIED,FALL_DOWN};
        int actionTrigger;


        vec3 playerPos;         //player position settings
        vec3 playerScale;       //player size
        vec3 vert[4];           //rectangle around player

        void playerInit(float, float, float);      //initialize player - passing horizontal and vertical frames from sprite sheet
        void drawPlayer();      //rendering the player
        void actions();         //player actions
        void falldown();

        float xMin,xMax,yMin,yMax;
        float framesX, framesY;
        float radius;
        int hitCount=3;
        float gravity = 0.19;
        float jumpSpeed = 0.450;
        float yVelocity = 0.00;

        _timer *timer = new _timer();
        _texture *plyImage = new _texture();
        int playerLanded;
        bool colLeft, colRight, colUp, colBottom, colPlyTrue;
        bool colPlyEnm, colPlyShoot, colPlyDir;
        float plyPosY,plyPosX;
        int colCount = 0, cntNumShoot = 0;

    protected:

    private:
};

#endif // _PLAYER_H
