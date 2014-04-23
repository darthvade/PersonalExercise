#ifndef __THREADPOOL_H__
#define __THREADPOOL_H__

#include <queue>
#include <vector>
#include "MutexLock.h"
#include "Condition.h"
#include "Noncopyable.h"

struct Task {
	int _num;
};


#endif
