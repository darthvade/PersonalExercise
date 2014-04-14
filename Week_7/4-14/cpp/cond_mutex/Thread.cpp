#include "Thread.h"
#include <iostream>
#include <unistd.h>
#include "mutex.h"

using namespace std;

Mutex mylock;

Thread::Thread(int num, string s): num(num), s(s) {
	
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
		mylock.lock();
		sleep(1);
		cout << s << endl;
		mylock.unlock();
	}
}

void* Thread::func(void *args) {
	Thread *pthread = static_cast<Thread *>(args);
	pthread->run();
	pthread_exit((void *)0);
}
