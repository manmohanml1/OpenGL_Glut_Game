#include "_glLight.h"

_glLight::_glLight(GLenum Light)
{
    //ctor
    glEnable(Light);
    glEnable(GL_LIGHTING);
}

_glLight::~_glLight()
{
    //dtor
}
void _glLight::setLight(GLenum Light)
{
    glLightfv(Light, GL_AMBIENT,lightAmbient);
    glLightfv(Light, GL_DIFFUSE, lightDiffuse);
    glLightfv(Light, GL_SPECULAR,lightSpecular);
    glLightfv(Light, GL_POSITION,lightPosition);

    glMaterialfv(GL_FRONT,GL_AMBIENT,matAmbient);
    glMaterialfv(GL_FRONT,GL_DIFFUSE,matDiffuse);
    glMaterialfv(GL_FRONT,GL_SPECULAR,matSpecular);
    glMaterialfv(GL_FRONT,GL_SHININESS,highShininess);
}
