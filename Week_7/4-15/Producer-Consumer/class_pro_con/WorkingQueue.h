#ifndef __WORKINGQUEUE_H__
#define __WORKINGQUEUE_H__

#include "Mutex.h"
#include "CondVar.h"
#include <queue>

class WorkingQueue {
	public:

	private:
		Mutex _mutex;
		CondVar _condvar;
		queue<int> _Q;
};

#endif
