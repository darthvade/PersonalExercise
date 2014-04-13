#include <iostream>
#include <pthread.h>

#define NUM_THREADS 3

struct ARG {
	int data;
	pthread_mutex_t mutex;
	pthread_cond_t cond;
};

struct ARG Arg;

void *func_boss(int *id) {

}

void *func_worker(int *id) {

}

int main() {

	pthread_t thread[NUM_THREADS];

	for(int i = 0; i != NUM_THREADS; ++i) {
		pthread_create(thread + i, NULL, (void *(*)(void *))func_worker, &i);
	}

	pthread_exit(NULL);
}
