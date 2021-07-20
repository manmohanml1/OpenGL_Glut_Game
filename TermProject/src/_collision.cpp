#include "_collision.h"

_collision::_collision()
{
    //ctor
}

_collision::~_collision()
{
    //dtor
}

bool _collision::isLinearCollision(float x1, float x2)
{
   if(fabs(x1-x2<0.1))return true;
   return false;
}

bool _collision::isRadialCollision(_player &plyr, _enemies enms)
{
    float a_x =(plyr.playerPos.x + (plyr.playerScale.x/2.0));
    float a_y =(plyr.playerPos.y + (plyr.playerScale.y/2.0));
    float b_x =(enms.enemyPos.x + (enms.enemyScale.x/2.0));
    float b_y =(enms.enemyPos.y + (enms.enemyScale.y/2.0));
    if((abs(b_y-a_y)<0.8) ||(abs(b_x-a_x)<0.8))
    {
        enms.colEnmAtck=true;
    } else
    {
        enms.colEnmAtck=false;
    }
    if(sqrt(pow(a_x-b_x,2)+pow(a_y-b_y,2))<plyr.radius+enms.radius)return true;
    return false;
}
bool _collision::isRadialCollision2(_enemies &enm, _bullet &bllt)
{
    float c_x =(bllt.bulletPos.x + (bllt.bulletScale.x/2.0));
    float c_y =(bllt.bulletPos.y + (bllt.bulletScale.y/2.0));
    float d_x =(enm.enemyPos.x + (enm.enemyScale.x/2.0));
    float d_y =(enm.enemyPos.y + (enm.enemyScale.y/2.0));

    if(sqrt(pow(c_x-d_x,2)+pow(c_y-d_y,2))<bllt.radius+enm.radius)return true;
    return false;
}

bool _collision::isCircleRayCollision(float, float, float, float, float)
{

}

bool _collision::isCubic(float, float, float, float)
{

}

bool _collision::isSphereCollision(float, float, float, float)
{

}

bool _collision::isCollisionFloor(float, float, float)
{

}
bool _collision::isBoundedCollision(_player &one,_screenSettings *a,int i, int j)
{
    float playerXmin = one.playerPos.x - (one.playerScale.x/2.0);
    float playerXmax = one.playerPos.x + (one.playerScale.x/2.0);
    float playerYmin = one.playerPos.y - (one.playerScale.y/2.0);
    float playerYmax = one.playerPos.y + (one.playerScale.y/2.0);
    float tileXmin = (a->scenePos[i][j].x)-(a->sceneScale[i].x/2.0);
    float tileXmax = (a->scenePos[i][j].x)+(a->sceneScale[i].x/2.0);
    float tileYmin = (a->scenePos[i][j].y) - (a->sceneScale[i].y/2.0);
    float tileYmax = (a->scenePos[i][j].y) + (a->sceneScale[i].y/2.0);

         // collision x-axis?
        bool collisionX = (one.playerPos.x + (one.playerScale.x/2.0)) >= ((a->scenePos[i][j].x)-(a->sceneScale[i].x/2.0)) && (a->scenePos[i][j].x + (a->sceneScale[i].x/2.0)) >= (one.playerPos.x -(one.playerScale.x/2.0));
        // collision y-axis?

        bool collisionY = (one.playerPos.y + (one.playerScale.y/2.0)) >= ((a->scenePos[i][j].y)-(a->sceneScale[i].y/2.0)) && (a->scenePos[i][j].y + (a->sceneScale[i].y/2.0)) >= (one.playerPos.y -(one.playerScale.y/2.0));
        // collision only if on both axes
        colTrue= collisionX && collisionY;
        one.colPlyTrue= colTrue;
        if(colTrue)
        {
            if((playerXmax >= tileXmin) && (playerXmin < tileXmin) && (one.playerPos.y >= tileYmin) && (one.playerPos.y <= tileYmax))          //from left
            {
                a->colLeft= true;
                one.colLeft= true;
            }
            if((playerXmax > tileXmax) && (playerXmin <= tileXmax) && (one.playerPos.y >= tileYmin) && (one.playerPos.y <= tileYmax))           //from right
            {
                a->colRight= true;
                one.colRight= true;
            }
            if((playerYmax > tileYmax) && (playerYmin <= tileYmax) && (one.playerPos.x >= tileXmin) && (one.playerPos.x <= tileXmax))           //from top
            {
                a->colUp= true;
                one.colUp= true;
            }
            if((playerYmax >= tileYmin) && (playerYmin < tileYmin) && (one.playerPos.x >= tileXmin) && (one.playerPos.x <= tileXmax))           //from bottom
            {
                a->colBottom=true;
                one.colBottom=true;
            }
        }
        else
        {
            a->colLeft= false;
            a->colRight= false;
            a->colUp= false;
            a->colBottom= false;
            one.colLeft= false;
            one.colRight= false;
            one.colUp= false;
            one.colBottom= false;
            //a.colPlyTrue=false;
        }

    return collisionX && collisionY;

}
bool _collision::isBoundedCollision2(_enemies e, _screenSettings *b, int i, int j)
{
    float enemyXmin = e.enemyPos.x - (e.enemyScale.x/2.0);
    float enemyXmax = e.enemyPos.x + (e.enemyScale.x/2.0);
    float enemyYmin = e.enemyPos.y - (e.enemyScale.y/2.0);
    float enemyYmax = e.enemyPos.y + (e.enemyScale.y/2.0);
    float tileEnmXmin = (b->scenePos[i][j].x)-(b->sceneScale[i].x/2.0);
    float tileEnmXmax = (b->scenePos[i][j].x)+(b->sceneScale[i].x/2.0);
    float tileEnmYmin = (b->scenePos[i][j].y) - (b->sceneScale[i].y/2.0);
    float tileEnmYmax = (b->scenePos[i][j].y) + (b->sceneScale[i].y/2.0);
     // collision x-axis?
        bool ecollisionX = (e.enemyPos.x + (e.enemyScale.x/2.0)) >= ((b->scenePos[i][j].x)-(b->sceneScale[i].x/2.0)) && (b->scenePos[i][j].x + (b->sceneScale[i].x/2.0)) >= (e.enemyPos.x -(e.enemyScale.x/2.0));
        // collision y-axis?

        bool ecollisionY = (e.enemyPos.y + (e.enemyScale.y/2.0)) >= ((b->scenePos[i][j].y)-(b->sceneScale[i].y/2.0)) && (b->scenePos[i][j].y + (b->sceneScale[i].y/2.0)) >= (e.enemyPos.y -(e.enemyScale.y/2.0));
        // collision only if on both axes

        colEnmyTrue= ecollisionX && ecollisionY;
        e.colEnmTrue= colEnmyTrue;
        if(colEnmyTrue)
        {
            if((enemyXmax >= tileEnmXmin) && (enemyXmin < tileEnmXmin) && (e.enemyPos.y >= tileEnmYmin) && (e.enemyPos.y <= tileEnmYmax) )         //from left
            {
                e.colEnmLeft= true;
            }
            else if((enemyXmax > tileEnmXmax) && (enemyXmin <= tileEnmXmax) && (e.enemyPos.y >= tileEnmYmin) && (e.enemyPos.y <= tileEnmYmax))   //from right
            {
                e.colEnmRight= true;
            }
            else if((enemyYmax >= tileEnmYmin) && (enemyYmin < tileEnmYmin) && (e.enemyPos.x >= tileEnmXmin) && (e.enemyPos.x <= tileEnmXmax))   //from bottom
            {
                e.colEnmBottom= true;
            }
            else if((enemyYmax > tileEnmYmax) && (enemyYmin <= tileEnmYmax) && (e.enemyPos.x >= tileEnmXmin) && (e.enemyPos.x <= tileEnmXmax))   //from top
            {
                e.colEnmUp=true;
            }
        }
        else
        {
            e.colEnmLeft= false;
            e.colEnmRight= false;
            e.colEnmUp= false;
            e.colEnmBottom= false;
            //e.colEnmTrue=false;
        }

    return ecollisionX && ecollisionY;

}

bool _collision::isBoundedCollision3(_bullet blt, _screenSettings* ss, int i, int j)
{

     // collision x-axis?
        bool bcollisionX = (blt.bulletPos.x + (blt.bulletScale.x/2.0)) >= ((ss->scenePos[i][j].x)-(ss->sceneScale[i].x/2.0)) && (ss->scenePos[i][j].x + (ss->sceneScale[i].x/2.0)) >= (blt.bulletPos.x -(blt.bulletScale.x/2.0));
        // collision y-axis?

        bool bcollisionY = (blt.bulletScale.y + (blt.bulletScale.y/2.0)) >= ((ss->scenePos[i][j].y)-(ss->sceneScale[i].y/2.0)) && (ss->scenePos[i][j].y + (ss->sceneScale[i].y/2.0)) >= (blt.bulletPos.y -(blt.bulletScale.y/2.0));
        // collision only if on both axes

    return bcollisionX && bcollisionY;
}

