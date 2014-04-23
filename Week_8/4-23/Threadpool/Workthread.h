#ifndef __WORKTHREAD_H__
#define __WORKTHREAD_H__

#include "Thread.h"

class Threadpool;

class Workthread : public Thread {
public:
	void run();
	register_threadpool(Threadpool *);
private:
	Threadpool *_pThreadpool;
};

#endif
