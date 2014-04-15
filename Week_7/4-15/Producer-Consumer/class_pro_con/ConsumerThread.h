#ifndef __CONSUMER_H__
#define __CONSUMER_H__

#include <pthread.h>
#include "WorkingQueue.h"
#include <iostream>
#include <unistd.h>
#include "Mutex.h"

class ConsumerThread {
	public:
		ConsumerThread(WorkingQueue *wq, int frequent);
		~ConsumerThread();
		void start();
		void join();
	private:
		pthread_t _p_id;
		WorkingQueue *_wq;
		Mutex _cout_lock;
		int _frequent;
		static void* _consumer_action(void *args);
		void _run();
};

#endif
