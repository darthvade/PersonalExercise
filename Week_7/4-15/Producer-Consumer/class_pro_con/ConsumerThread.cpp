#include "ConsumerThread.h"

ConsumerThread::ConsumerThread() : _p_id(0) {

}

ConsumerThread::~ConsumerThread() {

}

void ConsumerThread::start() {
	pthread_create(&_p_id, NULL, _consumer_action, this);
}

void ConsumerThread::join() {

}

void* ConsumerThread::_consumer_action(void *) {

	pthread_exit((void *)0);
}

void ConsumerThread::_run() {

}
