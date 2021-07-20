#include "_screenSettings.h"

_screenSettings::_screenSettings()
{
    //ctor
    vert[0].x=-0.5;vert[0].y=-0.5;vert[0].z= -1;
    vert[1].x=0.5;vert[1].y=-0.5;vert[1].z= -1;
    vert[2].x=0.5;vert[2].y=0.5;vert[2].z= -1;
    vert[3].x=-0.5;vert[3].y=0.5;vert[3].z= -1;
}

_screenSettings::~_screenSettings()
{
    //dtor
}
void _screenSettings::sceneInit(int U, int V)
{
//---------------------------------------------------------level 1------------------------------------------------------------------------------------
if(level==1)
{
 if(U == 0)//cloud tile
 {
    if(V == 0)//1st cloud tile(center)
    {
     scenePos[U][V].x = 0.4; scenePos[U][V].y = -0.1;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }else if(V == 1)//2nd cloud tile(mid left)
    {
     scenePos[U][V].x = -3.675; scenePos[U][V].y = -0.1;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }else if(V == 2)//3rd cloud tile(up left)
    {
     scenePos[U][V].x = -3.675; scenePos[U][V].y = 1.4;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }else if(V == 3)//4th cloud tile(up right)
    {
     scenePos[U][V].x = 3.6; scenePos[U][V].y = 1.7;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }
 }
 else if(U == 1)//2*2 tile
 {
     if(V == 0)//1st cloud tile(center)
    {
     scenePos[U][V].x = 3.825; scenePos[U][V].y = 0.0;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 0.6; sceneScale[U].y = 0.35; sceneScale[U].z = 1.0;
    }
     else if(V == 1)
     {
        scenePos[U][V].x = 3.825; scenePos[U][V].y = 0.0;  scenePos[U][V].z = -1.0;
        sceneScale[U].x = 0.6; sceneScale[U].y = 0.35; sceneScale[U].z = 1.0;
     }
 }
 else if(U == 2)//8*3 tile
 {
     if(V == 0)//1st cloud tile(center)
    {
     scenePos[U][V].x = -1.425; scenePos[U][V].y = -1.8;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 3.0; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
    }
 }
 else if(U == 3)//3*2 tile
 {  if(V == 0)//3*2 tile
    {
     scenePos[U][V].x = -3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 0.9; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
    }
    else if(V == 1)
     {
        scenePos[U][V].x = -3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
        sceneScale[U].x = 0.9; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
     } else if(V == 2)
     {
        scenePos[U][V].x = -3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
        sceneScale[U].x = 0.9; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
     }
 }
 else if(U == 4)//4*4 tile
 {
     if(V == 0)//4*4 tile(center)
     {
      scenePos[U][V].x = 2.1; scenePos[U][V].y = 0.7; scenePos[U][V].z = -1.0;
      sceneScale[U].x = 1.25; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
     else if(V == 1)//4*4 tile(up left)
     {
     scenePos[U][V].x = -1.6; scenePos[U][V].y = 0.7; scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.25; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
     else if(V == 2)//4*4 tile(down right)
     {
     scenePos[U][V].x = 2.1; scenePos[U][V].y = -1.2; scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.25; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
 }
}
//---------------------------------------------------------level 2------------------------------------------------------------------------------------
else if(level==2)
{
 if(U == 0)//cloud tile
 {
    if(V == 0)//1st cloud tile(up mid-left)
    {
     scenePos[U][V].x = -1.3; scenePos[U][V].y = 0.6;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }else if(V == 1)//12nd cloud tile(center mid-down)
    {
     scenePos[U][V].x = 0.2; scenePos[U][V].y = -0.4; scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }else if(V == 2)//3rd cloud tile(down right)
    {
     scenePos[U][V].x = 3.6; scenePos[U][V].y = -0.7; scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }else if(V == 3)//4th cloud tile(up right)
    {
     scenePos[U][V].x = 3.6; scenePos[U][V].y = 1.6;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.0; sceneScale[U].y = 0.30; sceneScale[U].z = 1.0;
    }

 }
 else if(U == 1)//2*2 tile(center up)
 {
     if(V == 0)
     {
     scenePos[U][V].x = 0.3; scenePos[U][V].y = 1.8;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 0.6; sceneScale[U].y = 0.35; sceneScale[U].z = 1.0;
     }
     else if(V == 1)
     {
        scenePos[U][V].x = 0.3; scenePos[U][V].y = 1.8;  scenePos[U][V].z = -1.0;
        sceneScale[U].x = 0.6; sceneScale[U].y = 0.35; sceneScale[U].z = 1.0;
     }
 }
 else if(U == 2)//8*3 tile(center down)
 {
     if(V == 0)
     {
     scenePos[U][V].x = 0.4; scenePos[U][V].y = -1.7;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 3.0; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
 }
 else if(U == 3)//3*2 tile(down left)
 {
     if(V == 0)
     {
         scenePos[U][V].x = -3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 1.0; sceneScale[U].y = 0.45; sceneScale[U].z = 1.0;
     }
     else if(V == 1)
     {
         scenePos[U][V].x = -3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 1.0; sceneScale[U].y = 0.45; sceneScale[U].z = 1.0;
     } else if(V == 2)
     {
         scenePos[U][V].x = -3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 1.0; sceneScale[U].y = 0.45; sceneScale[U].z = 1.0;
     }

 }
 else if(U == 4)//4*4 tile
 {
     if(V == 0)//4*4 tile(up left)
     {
      scenePos[U][V].x = -3.6; scenePos[U][V].y = 1.3;  scenePos[U][V].z = -1.0;
      sceneScale[U].x = 1.25; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
     else if(V == 1)//4*4 tile(mid-down right)
     {
     scenePos[U][V].x = -2.5; scenePos[U][V].y = -0.7; scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.25; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
     else if(V == 2)//(4*4)tile(mid-up right)
     {
     scenePos[U][V].x = 2.0; scenePos[U][V].y = 0.5; scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.25; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
 }
}
//---------------------------------------------------------level 3------------------------------------------------------------------------------------
else if(level==3)
{
 if(U == 0)//cloud tile
 {
    if(V == 0)//1st cloud tile(center)
    {
     scenePos[U][V].x = -1.8; scenePos[U][V].y = 0.3;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.1; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
    }else if(V == 1)//2nd cloud tile(mid left)
    {
     scenePos[U][V].x = -3.675; scenePos[U][V].y = -0.4;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.1; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
    }else if(V == 2)//3rd cloud tile(up left)
    {
     scenePos[U][V].x = -3.675; scenePos[U][V].y = 1.0;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.1; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
    }else if(V == 3)//4th cloud tile(up right)
    {
     scenePos[U][V].x = 0.8; scenePos[U][V].y = 0.3;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 1.1; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
    }
 }
 else if(U == 1)//2*2 tile
 {
    if(V == 0)//1st 2*2 tile (up right)
     {
         scenePos[U][V].x = 3.825; scenePos[U][V].y = 1.5;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 0.8; sceneScale[U].y = 0.45; sceneScale[U].z = 1.0;
     }
    else if(V == 1)//2nd 2*2 tile (center up)
     {
         scenePos[U][V].x = -0.5; scenePos[U][V].y = 1.1;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 0.8; sceneScale[U].y = 0.45; sceneScale[U].z = 1.0;
     }
 }
 else if(U == 2)//8*3 tile(down left)
 {
     if(V == 0)
     {
     scenePos[U][V].x = -2.9; scenePos[U][V].y = -1.75;  scenePos[U][V].z = -1.0;
     sceneScale[U].x = 3.0; sceneScale[U].y = 0.85; sceneScale[U].z = 1.0;
     }
 }
 else if(U == 3)//3*2 tile
 {
     if(V == 0)//1st 3*2 tile(center mid-down)
     {
         scenePos[U][V].x = -0.4; scenePos[U][V].y = -0.7;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 0.9; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
     }
     else if(V == 1)//2nd 3*2 tile(down right)
     {
         scenePos[U][V].x = 3.825; scenePos[U][V].y = -1.9;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 0.9; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
     }
     else if(V == 2)//3rd 3*2 tile(up mid-right)
     {
         scenePos[U][V].x = 2.4; scenePos[U][V].y = 0.9;  scenePos[U][V].z = -1.0;
         sceneScale[U].x = 0.9; sceneScale[U].y = 0.40; sceneScale[U].z = 1.0;
     }

 }
 else if(U == 4)//4*4 tile
 {
     if(V==0)//1st 4*4 tile(center)
     {
      scenePos[U][V].x = 2.4; scenePos[U][V].y = -1.0; scenePos[U][V].z = -1.0;
      sceneScale[U].x = 1.5; sceneScale[U].y = 1.0; sceneScale[U].z = 1.0;
     }
     else if(V==1)//4*4 tile(up left)
     {
        scenePos[U][V].x = 2.4; scenePos[U][V].y = -1.0; scenePos[U][V].z = -1.0;
        sceneScale[U].x = 1.5; sceneScale[U].y = 1.0; sceneScale[U].z = 1.0;
     }
     else if(V==2)//4*4 tile(down right)
     {
        scenePos[U][V].x = 2.4; scenePos[U][V].y = -1.0; scenePos[U][V].z = -1.0;
        sceneScale[U].x = 1.5; sceneScale[U].y = 1.0; sceneScale[U].z = 1.0;
     }
 }
}
    xMin=0; xMax=1; yMin=0; yMax=1;
}

void _screenSettings::drwScn(int U, int V)
{
    glLoadIdentity();
    glTranslatef(scenePos[U][V].x,scenePos[U][V].y,scenePos[U][V].z);
    glScalef(sceneScale[U].x,sceneScale[U].y,sceneScale[U].z);
    glBegin(GL_QUADS);
        glTexCoord2f(xMin,yMax);
        glVertex3f(vert[0].x,vert[0].y,vert[0].z);
        glTexCoord2f(xMax,yMax);
        glVertex3f(vert[1].x,vert[1].y,vert[1].z);
        glTexCoord2f(xMax,yMin);
        glVertex3f(vert[2].x,vert[2].y,vert[2].z);
        glTexCoord2f(xMin,yMin);
        glVertex3f(vert[3].x,vert[3].y,vert[3].z);
    glEnd();
}
