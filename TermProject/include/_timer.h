#ifndef _TIMER_H
#define _TIMER_H

#include<time.h>

class _timer
{
    public:
        _timer();
        virtual ~_timer();

        clock_t startTime;

        bool isStart();
        bool isPaused();
        bool isStop();

        clock_t getTicks();     //get ticks for animation
        void startTimer();      //starting timer
        void pauseTime();
        void stopTimer();
        void resetTime();       //reset the timer

    protected:

    private:
};

#endif // _TIMER_H
