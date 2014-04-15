#include "WorkingQueue.h"

WorkingQueue::WorkingQueue(): _condvar(&_mutex) {

}

WorkingQueue::~WorkingQueue() {

}

int WorkingQueue::consume() {
	_mutex.lock();

	_mutex.unlock();
}

void WorkingQueue::product(int n) {

}
