#include "CondVar.h"

CondVar::CondVar(Mutex &mutex) {
	pthread_cond_init(&condvar, &mutex);
}

CondVar::~CondVar() {
	pthread_cond_destroy(&condvar);
}
