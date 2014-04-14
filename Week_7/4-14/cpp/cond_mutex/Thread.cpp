#include "Thread.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Thread::Thread(int num): num(num){
	
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
		sleep(1);
		cout << "Hehe?!" << endl;
	}
}

void* func(void *args) {
	Thread *pthread = static_cast<Thread *>(args);
	pthread->run();
	return;
}
