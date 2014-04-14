#ifndef __MUTEX_H__
#define __MUTEX_H__

#include <pthread.h>

class Mutex {
	friend class Condvar;
	public:
		Mutex();
		~Mutex();
		void lock();
		void unlock();
	private:
		pthread_mutex_t mutex;
};

#endif
