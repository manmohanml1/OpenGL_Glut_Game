#ifndef _INPUT_H
#define _INPUT_H

#include<windows.h>
#include<_parallax.h>
#include<_player.h>
#include <_LandingPage.h>
#include<_HelpPage.h>
#include<_MenuPage.h>
#include<_PopUp.h>
#include<_credits.h>
#include<_sounds.h>

class _input
{
    public:
        _input();
        virtual ~_input();
        void keyPressed(_player*);
        void keyPressed(_sounds *);
        void moveEnv(_parallax *,float);
        void keyUp();
        void keyUp(_player*);
         //enum {UP,DOWN,RIGHT,LEFT,SPACE};
        bool upKey,downKey,rightKey,leftKey,spaceKey;


//         void mouseDown(_model*,float, float);
        void mouseUp();
//         void mouseWheel(_model*,float);
//         void mouseMove(_model*,float,float);
        void mouseDown(_LandingPage*);
        void mouseDown(_MenuPage*,GLdouble,GLdouble);

         void keyPressed(_LandingPage*);     //input handling for landing page
         void keyPressed(_MenuPage*);        //input handling for menu page
         void keyPressed(_HelpPage*);        //input handling for help page
         void keyPressed(_PopUp*);           //input handling for Pop-up page
         void keyPressed(_credits *);        //input handling for credits page


         float prevMouseX;
         float prevMouseY;
         bool mouseTranslation;
         bool mouseRotate;
         int flag;
         //bool keys[5];

         WPARAM wParam;
    protected:

    private:
};

#endif // _INPUT_H
