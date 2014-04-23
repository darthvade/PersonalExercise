#ifndef __MUTEXLOCK_H__
#define __MUTEXLOCK_H__

#include <pthread.h>
#include "Noncopyable.h"

class Mutex : public Noncopyable {
public:
private:
	pthread_mutex_t _mutex;
};


#endif
