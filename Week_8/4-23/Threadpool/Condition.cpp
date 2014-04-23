#include "Condition.h"

Condition::Condition() {
	pthread_cond_init(&_cond, NULL);
}

Condition::~Condition() {
	pthread_cond_destroy(&_cond);
}

void Condition::wait() {
	pthread_cond_wait(&_cond, &_pMutex->_mutex);
}

void Condition::notify() {

}

void Condition::notifyall() {

}
