#ifndef __CONSUMER_H__
#define __CONSUMER_H__

#include <pthread.h>

class ConsumerThread {
	public:
		ConsumerThread();
		~ConsumerThread();
		void start();
		void join();
	private:
		pthread_t _p_id;
		static void _Consumer_action();
		void _run();
};


#endif
