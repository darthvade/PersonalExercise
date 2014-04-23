#ifndef __CONDITION_H__
#define __CONDITION_H__

#include <pthread.h>
#include "Noncopyable.h"

class Condition : public Noncopyable {
public:
	Condition();
	~Condition();
void wait();
private:
	Mutex *_pMutex;
	pthread_cond_t _cond;
};


#endif
