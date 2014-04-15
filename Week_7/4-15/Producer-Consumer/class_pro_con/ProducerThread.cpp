#include "ProducerThread.h"

ProducerThread::ProducerThread(WorkingQueue *wq) : 
	_p_id(0), _wq(wq) {

}

ProducerThread::~ProducerThread() {

}

void ProducerThread::start() {

}

void ProducerThread::join() {

}

void* ProducerThread::_producer_action(void *args) {

	pthread_exit((void *)0);
}

void ProducerThread::_run() {

}
