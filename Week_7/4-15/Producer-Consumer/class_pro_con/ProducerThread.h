#ifndef __PRODUCER_H__
#define __PRODUCER_H__

#include <pthread.h>
#include <iostream>
#include "WorkingQueue.h"

class ProducerThread {
	public:
		ProducerThread(WorkingQueue *wq);
		~ProducerThread();
		void start();
		void join();
	private:
		pthread_t _p_id;
		WorkingQueue *wq;
		static void _producer_action();
		void _run();
};

#endif
