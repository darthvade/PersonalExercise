#include "Threadpool.h"

Threadpool::Threadpool(std::vector<Workthread>::size_type max_thread) :
	_task_queue(), _max_thread(max_thread), _thread_vector(_max_thread), _is_started(false), _lock(), _cond(&_lock){
	for(std::vector<Workthread>::iterator iter = _thread_vector.begin(); iter != _thread_vector.end(); ++iter) {
		iter->register_threadpool(this);	
	}
}

Threadpool::~Threadpool() {
	stop_threadpool();
}

void Threadpool::start_threadpool() {
	if(_is_started == false) {
		_is_started = true;
		for(std::vector<Workthread>::iterator iter = _thread_vector.begin(); iter != _thread_vector.end(); ++iter) {
			iter->start();	
		}
	}
}

void Threadpool::stop_threadpool() {
	if(_is_started == false) {
		return;
	}
	_is_started = false;
	_cond.notifyall();
}
