#include "Threadpool.h"

Threadpool::Threadpool(std::vector<Workthread>::size_type max_thread) :
	_task_queue(), _max_thread(max_thread), _thread_vector(_max_thread), _is_started(false), _lock(), _cond(&_lock){

}

Threadpool::~Threadpool() {

}
