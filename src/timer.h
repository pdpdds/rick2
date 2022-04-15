#ifndef TIMER_H
#define TIMER_H

#ifdef _WIN32
#include <windows.h>
#else
#include <time.h>
#endif
#include <stdio.h>

typedef class Timer* timer_ptr; 
class Timer {
  private:    
    double PCFreq;
#ifdef _WIN32
    __int64 CounterStart;
#else
    unsigned long CounterStart;
#endif

  public:    
	  Timer();    // class constructor	    
	  ~Timer();   // class desructor

    void   StartCounter();
    double GetCounter();
};

#endif // TIMER_H
