#include <iostream>
#include "Timer/timer.h"
#include "Timer/timer.cpp"

using namespace std;

int main()
{
    Timer timer;
    timer.start();
    double var = 0.;
    for( int i=0; i<10000; ++i )
        for( int j=0; j<10000; ++j )
            var += 1;
    timer.stop();

    std::cout<<"chunchun"<<std::endl;
    std::cout<<"run time: " << timer.read()<<std::endl;
    return 0;
}
