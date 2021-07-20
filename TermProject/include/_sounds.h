#ifndef _SOUNDS_H
#define _SOUNDS_H

#include <iostream>
#include <SNDS/irrKlang.h>



using namespace std;

using namespace irrklang;

class _sounds
{
    public:
        _sounds();
        virtual ~_sounds();

        void playMusic(char *);
        void playSound(char *);
        void pauseSound(char *);
        void stopAllSounds();
        int initSounds();


        ISoundEngine * sndEng = createIrrKlangDevice();

    protected:

    private:
};

#endif // _SOUNDS_H
