#ifndef __CONDITION_H__
#define __CONDITION_H__

#include <pthread.h>
#include "Noncopyable.h"
#include "MutexLock.h"

class Condition : public Noncopyable {
public:
	Condition();
	~Condition();
	void wait();
	void notify();
	void notifyall();
private:
	Mutex *_pMutex;
	pthread_cond_t _cond;
};


#endif
