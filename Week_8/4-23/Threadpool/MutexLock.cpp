#include "MutexLock.h"

Mutex::Mutex() {
	pthread_mutex_init(&_mutex, NULL);
};

Mutex::~Mutex() {

};
