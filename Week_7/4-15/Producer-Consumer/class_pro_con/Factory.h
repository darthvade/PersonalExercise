#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Mutex.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"
#include "WorkingQueue.h"

class Factory {
	public:
		Factory(int num_consumer,
				int fre_consumer,
				int num_producer,
				int fre_producer);
		~Factory();	
	private:
		int _num_consumer;
	   	int _fre_consumer;	
		int _num_producer;
		int _fre_producer;
		WorkingQueue _wq;
		Mutex _cout_lock;
};

#endif
