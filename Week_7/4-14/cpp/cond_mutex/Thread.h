#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>

class Thread {
	public:
		Thread();
		~Thread();
	private:
		pthread_t thread;
};

#endif
