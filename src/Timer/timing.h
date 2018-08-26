#ifndef TIMER_H
#define TIMER_H

#include <ctime>

inline static double seconds()
{
    const double secs_per_tick = 1.0 / CLOCKS_PER_SEC;
    return (double(clock()))*secs_per_tick;
}

class Timer
{
public:
    Timer();
    ~Timer();
    void start();
    void stop();
    double read();
private:
    bool running;
    double startTime;
    double total;
    
};

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



#endif
