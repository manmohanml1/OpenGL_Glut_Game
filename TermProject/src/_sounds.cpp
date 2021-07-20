#include "_sounds.h"

_sounds::_sounds()
{
    //ctor
}

_sounds::~_sounds()
{
    //dtor
    sndEng->drop();
}

void _sounds::playMusic(char* fileName)
{
    sndEng->play2D(fileName, true);         //true for repeat
}

void _sounds::playSound(char* fileName)
{
    sndEng->play2D(fileName, false, false);
}

void _sounds::pauseSound(char* fileName)
{
    sndEng->play2D(fileName, true, false);
}

void _sounds::stopAllSounds()
{

}

int _sounds::initSounds()
{
    if(!sndEng)
    {
        cout << "Could not start Sound Engine \n";
        return 0;
    }
    return 1;
}
