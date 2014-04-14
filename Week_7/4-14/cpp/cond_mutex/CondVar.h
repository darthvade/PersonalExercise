#ifndef __CONDVAR_H__
#define __CONDVAR_H__

#include <pthread.h>

class CondVar{

	private:
		pthread_cond_t condvar;
};


#endif
