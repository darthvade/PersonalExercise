#include "ProducerThread.h"

ProducerThread::ProducerThread(WorkingQueue *wq) : 
	_p_id(0), _wq(wq) {

}

ProducerThread::~ProducerThread() {

}

void ProducerThread::start() {
	pthread_create(&_p_id, NULL, _producer_action, this);
}

void ProducerThread::join() {
	pthread_join(_p_id, NULL);
}

void* ProducerThread::_producer_action(void *args) {
	ProducerThread *pproducer = static_cast<ProducerThread *>(args);
	pthread_exit((void *)0);
}

void ProducerThread::_run() {

}
