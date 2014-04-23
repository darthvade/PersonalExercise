#ifndef __MUTEXLOCK_H__
#define __MUTEXLOCK_H__

#include <pthread.h>
#include "Noncopyable.h"
#include "Condition.h"

class Condition;

class Mutex : public Noncopyable {
	friend class Condition;
public:
	Mutex();
	~Mutex();
	void lock();
	void unlock();
private:
	pthread_mutex_t _mutex;
};


#endif
