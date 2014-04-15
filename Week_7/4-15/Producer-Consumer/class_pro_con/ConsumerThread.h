#ifndef __CONSUMER_H__
#define __CONSUMER_H__

#include <pthread.h>
#include "WorkingQueue.h"

class ConsumerThread {
	public:
		ConsumerThread();
		~ConsumerThread();
		void start();
		void join();
	private:
		pthread_t _p_id;
		static void* _consumer_action(void *args);
		void _run();
};

#endif
