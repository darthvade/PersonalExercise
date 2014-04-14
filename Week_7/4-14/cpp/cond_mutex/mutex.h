#ifndef __MUTEX_H__
#define __MUTEX_H__

#include <pthread.h>

class CondVar;

class Mutex {
	//friend class Condvar;
	public:
	friend class Condvar;
		Mutex();
		~Mutex();
		void lock();
		void unlock();
	private:
		pthread_mutex_t mutex;
};

#endif
