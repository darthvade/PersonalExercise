#include <iostream>
#include <queue>
#include <pthread.h>

using namespace std;

queue<int> Q;

pthread_mutex_t mutex;

pthread_cond_t cond;

void *producer_func(void *args) {

	pthread_exit((void *)0);
}

void *consumer_func(void *args) {

	pthread_exit((void *)0);
}


int main() {
	pthread_mutex_init(&mutex);
	pthread_cond_init(&cond);

	return 0;
}
