#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Mutex.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"
#include "WorkingQueue.h"

class Factory {
	public:

	ptivate:
		int _init_producer_num;
		int _init_consumer_num;
};

#endif
