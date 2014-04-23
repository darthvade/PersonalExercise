#include "Workthread.h"
#include <iostream>

using namespace std;

void Workthread::run() {

}

void Workthread::register_threadpool(Threadpool *pThreadpool) {
	_pThreadpool = pThreadpool;
}

void Workthread::compute_task(int num) {
	cout << "num: " << num << endl;
}
