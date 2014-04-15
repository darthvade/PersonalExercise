#include "ConsumerThread.h"

using namespace std;

ConsumerThread::ConsumerThread(WorkingQueue *wq) :
	   	_p_id(0) , _wq(wq){

}

ConsumerThread::~ConsumerThread() {

}

void ConsumerThread::start() {
	pthread_create(&_p_id, NULL, _consumer_action, this);
}

void ConsumerThread::join() {
	pthread_join(_p_id, NULL);
}

void* ConsumerThread::_consumer_action(void *args) {
	ConsumerThread *pconsumer = static_cast<ConsumerThread *>(args);	
	pconsumer->_run();
	pthread_exit((void *)0);
}

void ConsumerThread::_run() {
	while(true) {
		int con = _wq->consume();
		cout << "consume Num " << con << endl; 
		sleep(1);
	}
}
