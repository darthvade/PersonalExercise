#include <iostream>
#include <pthread.h>

#define NUM_WORKER_THREADS 3

struct ARG {
	int data;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
};

struct ARG Arg;

void *func_boss(int *id) {

	pthread_exit((void *)0);
}

void *func_worker(int *id) {

	pthread_exit((void *)0);
}

int main() {

	pthread_t thread[NUM_WORKER_THREADS];
	pthread_t boss;

	int i = 1000;
	pthread_create(&boss, NULL, (void *(*)(void *))func_boss, &i);
	for(int i = 0; i != NUM_WORKER_THREADS; ++i) {
		pthread_create(thread + i, NULL, (void *(*)(void *))func_worker, &i);
	}

	for(int i = 0; i != NUM_WORKER_THREADS; ++i) {
		pthread_join(thread[i], NULL);
	}
	
	pthread_join(boss, NULL);

	pthread_exit(NULL);
}
