#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>

class Thread {
	public:
		Thread();
		~Thread();
		void start();
		void stop();
	private:
		pthread_t thread;
};

#endif
