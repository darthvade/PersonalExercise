#ifndef __THREAD_H__
#define __THREAD_H__

#include <pthread.h>

class Thread {
	public:
		Thread(int num);
		~Thread();
		void start();
		void join();
		void run();
	private:
		int num;
		pthread_t thread;
		static void* func(void *args);
};

#endif
