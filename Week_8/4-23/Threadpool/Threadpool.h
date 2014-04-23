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
	Threadpool(std::vector<Workthread>::size_type max_thread);
	~Threadpool();

	void start_threadpool();
	void stop_threadpool();

	bool add_task_queue(Task task);
	bool get_task_queue(Task &task);

	bool is_task_queue_empty() const;
};

#endif
