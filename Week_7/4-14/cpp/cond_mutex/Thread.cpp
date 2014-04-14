#include "Thread.h"

Thread::Thread() {
	
}

Thread::~Thread() {

}

void Thread::start() {
	pthread_create(&thread, NULL, func, this);
}

void Thread::join() {
	pthread_join(thread, NULL);
}

void Thread::run() {
	for(int i = 0; i != num; ++i) {
		cout << "Hehe?!" << endl;
	}
}

void* func(void *args) {
	Thread *pthread = static_cast<Thread *>(args);
	pthread->run();
	pthread_exit((void *)0);
}
