#ifndef TIMER_H
#define TIMER_H

#include <ctime>

class Timer
{
public:
    Timer();
    ~Timer();
    void start();
    void stop();
    double read();
private:
    double seconds();
    bool running;
    double startTime;
    double total;
    
};




#endif

