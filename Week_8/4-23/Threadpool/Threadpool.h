#ifndef __THREADPOOL_H__
#define __THREADPOOL_H__

#include <queue>
#include <vector>
#include "MutexLock.h"
#include "Condition.h"
#include "Noncopyable.h"
#include "Workthread.h"

struct Task {
	int _num;
};

class Threadpool : public Noncopyable {
public:
	Threadpool(std::vector<Wor>)
};

#endif
