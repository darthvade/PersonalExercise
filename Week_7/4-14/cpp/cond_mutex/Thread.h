#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>

class Thread {
	public:
		Thread();
		~Thread();
		void start();
		void join();
	private:
		pthread_t thread;
		void run();
		static void func();
};

#endif
