#ifndef _GLSCENE_H
#define _GLSCENE_H

#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <_input.h>
#include <_texture.h>
#include <_parallax.h>
#include <_player.h>
#include <_timer.h>
#include <_fallingObject.h>
#include <_collision.h>
#include <_gameMessage.h>
#include <_LandingPage.h>
#include<_HelpPage.h>
#include<_MenuPage.h>
#include<_PopUp.h>
#include<_credits.h>
#include <_screenSettings.h>
#include <conio.h>
#include <string>
#include <sstream>
#include <_enemies.h>
#include <_health.h>
#include <_bullet.h>
#include <_sounds.h>


using namespace std;


class _glScene
{
    public:
        _glScene();
        virtual ~_glScene();

        GLint initGL();
        GLint drawScene();
        void resizeGLScene(int,int);

        float screenWidth,screenHeight;
        bool level1,level2,level3;
        bool doneInitializing;
        bool gameComplete;

        _input *kbMs = new _input();
        _parallax *background = new _parallax();
        _parallax *background1 = new _parallax();
        _timer *timer = new _timer();
        _player *myPly = new _player();
        _fallingObject fallObj[20];
        //_collision *collision = new _collision();
        _gameMessage *msg = new _gameMessage();
        _LandingPage *landp = new _LandingPage();
        _LandingPage *lpdecor = new _LandingPage();
        _MenuPage *menup = new _MenuPage();
        _HelpPage *helpp = new _HelpPage();
        _PopUp *pup = new _PopUp();
        _collision *colsn = new _collision();
        _enemies enmy[3];
        _credits * cp = new _credits();
        _credits * cpname = new _credits();
        _screenSettings scrnStng[7][7];
        _health hlth[3];
        int colEnmCount=0, noblts=10;
        _bullet blet[10];
        _sounds *snds = new _sounds();


        string c;
        string h,j,k;
        char* t;
        bool clsn = false, enmClsn = false;
        ostringstream str1;


        int winMsg(HWND,UINT,WPARAM,LPARAM);
        WPARAM wParam;
        GLdouble posmX, posmY;

        void GetOGLPos(int x, int y)            //Mouse map coordinates
        {
            GLint viewport[4];
            GLdouble modelview[16];
            GLdouble projection[16];

            GLfloat winX, winY, winZ;
            GLdouble posX, posY, posZ;

            glGetDoublev(GL_MODELVIEW_MATRIX, modelview);
            glGetDoublev(GL_PROJECTION_MATRIX, projection);
            glGetIntegerv(GL_VIEWPORT, viewport);

            winX = (float)x;
            winY = (float)viewport[3] - (float)y;

            glReadPixels(x, int(winY), 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, &winZ);

            gluUnProject(winX, winY, winZ, modelview, projection, viewport, &posX, &posY, &posZ);

            posmX = posX;
            posmY = posY;

        }

    protected:

    private:

};

#endif // _GLSCENE_H
