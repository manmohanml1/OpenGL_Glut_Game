#ifndef _GLLIGHT_H
#define _GLLIGHT_H
#include<_glScene.h>

class _glLight:_glScene
{
    public:
        _glLight(GLenum light);
        virtual ~_glLight();

        float lightAmbient[4] = {1.0f, 0.0f, 0.0f,1.0f};
        float lightDiffuse[4] = {1.0f, 1.0f, 1.0f,1.0f};
        float lightSpecular[4] = {1.0f, 1.0f, 1.0f,1.0f};
        float lightPosition[4] = {2.0f, 5.0f, 5.0f, 0.0f};

        float matAmbient[4] = {1.7f, 0.0f, 0.0f, 1.0f};
        float matDiffuse[4] = {0.8f, 0.8f, 0.8f, 1.0f};
        float matSpecular[4] = {1.0f, 1.0f, 1.0f, 1.0f};
        float highShininess[1] = {100.0f};

        void setLight(GLenum);

    protected:

    private:
};

#endif // _GLLIGHT_H
