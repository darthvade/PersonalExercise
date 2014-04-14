#include "CondVar.h"

CondVar::CondVar(Mutex *mutex) {
	this->mutex = mutex;
	pthread_cond_init(&condvar, NULL);
}

CondVar::~CondVar() {
	pthread_cond_destroy(&condvar);
}

void CondVar::wait() {

}
