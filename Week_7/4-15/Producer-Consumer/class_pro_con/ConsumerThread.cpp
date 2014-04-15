#include "ConsumerThread.h"

ConsumerThread::ConsumerThread() : _p_id(0) {

}

ConsumerThread::~ConsumerThread() {

}

void ConsumerThread::start() {
	pthread_creat(&_p_id, NULL, _consumer_action, this);
}

void ConsumerThread::join() {

}

void ConsumerThread::_consumer_action() {

}

void ConsumerThread::_run() {

}
