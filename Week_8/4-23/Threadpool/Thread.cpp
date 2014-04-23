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

}

pthread_t Thread::get_tid() const {
	return _tid;
}
