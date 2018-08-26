#include "timer.h"

Timer::Timer():running(false),startTime(0.), total(0.)
{}

Timer::~Timer(){}

inline void Timer::start()
{
    running = true;
    total = 0;
    startTime = seconds();
}

inline void Timer::stop()
{
    if(running)
    {
        total += (seconds() - startTime);
        running = false;
    }
}

inline double Timer::read()
{
    if(running) 
        stop();
    return total;
}

inline double Timer::seconds()
{
    const double secs_per_tick = 1.0 / CLOCKS_PER_SEC;
    return (double(clock()))*secs_per_tick;
}
