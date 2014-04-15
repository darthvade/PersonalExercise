#ifndef __WORKINGQUEUE_H__
#define __WORKINGQUEUE_H__

#include "Mutex.h"
#include "CondVar.h"

class WorkingQueue {
	public:

	private:
		Mutex _mutex;
		CondVar _condvar;
};

#endif
