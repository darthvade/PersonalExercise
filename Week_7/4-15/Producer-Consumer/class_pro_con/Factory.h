#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Mutex.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"
#include "WorkingQueue.h"

class Factory {
	public:
			
	private:
		int _num_consumer; 
		int _num_producer;
		WorkingQueue _wq;
		Mutex _cout_lock;
};

#endif
