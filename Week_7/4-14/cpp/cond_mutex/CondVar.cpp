#include "CondVar.h"

CondVar::CondVar(Mutex &mutex) {
	pthread_cond_init(&condvar, mutex);
}
