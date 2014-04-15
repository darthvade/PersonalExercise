#ifndef __PRODUCER_H__
#define __PRODUCER_H__

#include <pthread.h>
#include <iostream>
#include "WorkingQueue.h"
#include <unistd.h>
#include <cstdlib>

class ProducerThread {
	public:
		ProducerThread(WorkingQueue *wq, int frequent);
		~ProducerThread();
		void start();
		void join();
	private:
		pthread_t _p_id;
		WorkingQueue *_wq;
		int _frequent;
		static void* _producer_action(void *args);
		void _run();
};

#endif
