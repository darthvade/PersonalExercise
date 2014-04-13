#include <iostream>
#include <pthread.h>

#define NUM_THREADS

struct ARG {
	int data;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
};

struct ARG Arg;
