#include "mutex.h"

Mutex::Mutex() {
	pthread_mutex_init(&mutex);
}
