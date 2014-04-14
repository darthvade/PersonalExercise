#include "Thread.h"

Thread::Thread() {
	
}

Thread::~Thread() {

}

void Thread::start() {
	pthread_create(&thread, NULL, func, this);
}

void Thread::join() {

}

void Thread::run() {

}

static void* func(void *args) {

	pthread_exit((void *)0);
}
