#include "ConsumerThread.h"

ConsumerThread::ConsumerThread(WorkingQueue *wq) :
	   	_p_id(0) , _wq(wq){

}

ConsumerThread::~ConsumerThread() {

}

void ConsumerThread::start() {
	pthread_create(&_p_id, NULL, _consumer_action, this);
}

void ConsumerThread::join() {

}

void* ConsumerThread::_consumer_action(void *args) {
	ConsumerThread *pconsumer = static_cast<ConsumerThread *>(args);	
	pconsumer->_run();
	pthread_exit((void *)0);
}

void ConsumerThread::_run() {
	_wq->consume();
}
