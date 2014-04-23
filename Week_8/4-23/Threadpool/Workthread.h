#ifndef __WORKTHREAD_H__
#define __WORKTHREAD_H__

#include "Thread.h"

class Theadpool;

class Workthread : public Thread {
public:

private:
	Threadpool *_pThreadpool;
};

#endif
