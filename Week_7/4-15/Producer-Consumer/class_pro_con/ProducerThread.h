#ifndef __PRODUCER_H__
#define __PRODUCER_H__

#include <pthread.h>

class ProducerThread {
	public:
	private:
		pthread_t _p_id;
		static void _producer_action();
		void _run();
};

#endif
