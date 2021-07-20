#ifndef _GAMEMESSAGE_H
#define _GAMEMESSAGE_H

#include <_texture.h>
#include <_common.h>

class _gameMessage
{
    public:
        _gameMessage();
        virtual ~_gameMessage();

        _texture *msgImage = new _texture();
        vec3 vert[4];
        vec3 msgSize;

        void showMessage();
        void msgInit();

    protected:

    private:
};

#endif // _GAMEMESSAGE_H
