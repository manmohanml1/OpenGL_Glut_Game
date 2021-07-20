#ifndef _FALLINGOBJECT_H
#define _FALLINGOBJECT_H

#include <_common.h>
#include <_timer.h>
#include <_texture.h>

class _fallingObject
{
    public:
        _fallingObject();
        virtual ~_fallingObject();

        void drawObj(bool, bool, bool);
        void objFallingAction(bool, bool, bool);
        void objInit(float, float, float, bool, bool, bool);

        vec3 objPosition;
        vec3 objSize;
        vec3 vert[4];           //rectangle around object
        int level2Movements=10, level3Movements=20;


        _timer *objTimer = new _timer();
        _texture *objImage = new _texture();

        float xMin,xMax,yMin,yMax;
        float framesX, framesY;
        float objSpeed, xSpeed;
        float radius;
        bool objActive;

    protected:

    private:
};

#endif // _FALLINGOBJECT_H
