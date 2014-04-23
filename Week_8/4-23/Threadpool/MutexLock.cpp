#include "MutexLock.h"

Mutex::Mutex() {
	pthread_mutex_init(&_mutex, NULL);
}

Mutex::~Mutex() {
	pthread_mutex_destroy(&_mutex);
}

void Mutex::lock() {
	pthread_mutex_lock(&_mutex);
}
