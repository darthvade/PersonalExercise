#include "Thread.h"

Thread::Thread() {

}

Thread::~Thread() {

}

void Thread::start() {
	pthread_create(&_tid, NULL, thread_func, this);
}

void Thread::join() {
	pthread_join(_tid, NULL);
}

void *Thread::thread_func(void *args) {
	Thread *pthread = static_cast<Thread *>(args);
	pthread->run();
	pthread_exit(0);
}

pthread_t Thread::get_tid() const {
	return _tid;
}
