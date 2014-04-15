#ifndef __CONSUMER_H__
#define __CONSUMER_H__

#include <pthread.h>

class Consumer {
	public:
		Consumer();
		~Consumer();
	private:
		pthread_t p_id;
};


#endif
