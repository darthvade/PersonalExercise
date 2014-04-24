#include "Condition.h"

Condition::Condition(Mutexlock *mutex) : _pMutex(mutex) {
	pthread_cond_init(&_cond, NULL);
}
