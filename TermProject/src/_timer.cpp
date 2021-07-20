#include "_timer.h"

_timer::_timer()
{
    //ctor
}

_timer::~_timer()
{
    //dtor
}
bool _timer::isStart()
{

}

bool _timer::isPaused()
{

}

bool _timer::isStop()
{

}

clock_t _timer::getTicks()
{
    return clock() - startTime;
}

void _timer::startTimer()
{
    startTime = clock();
}

void _timer::pauseTime()
{

}

void _timer::stopTimer()
{

}

void _timer::resetTime()
{
    startTime = clock();
}
