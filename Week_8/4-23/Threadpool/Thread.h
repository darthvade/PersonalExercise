#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>

class Thread {

protected:
	pthread_t _tid;	
};

#endif
