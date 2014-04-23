#ifndef __CONDITION_H__
#define __CONDITION_H__

#include <pthread.h>
#include "Noncopyable.h"

class Condition : public Noncopyable {
private:
	pthread_mutex_t *_pMutex;
	pthread_cond_t _cond;
};


#endif
