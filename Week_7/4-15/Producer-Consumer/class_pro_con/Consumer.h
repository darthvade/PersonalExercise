#ifndef __CONSUMER_H__
#define __CONSUMER_H__

#include <pthread.h>

class Consumer {
	public:
		Consumer();
		~Consumer();
		void start();
		void join();
	private:
		pthread_t p_id;
		static void Consumer();
		void run();
};


#endif
