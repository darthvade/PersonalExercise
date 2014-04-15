#include <iostream>
#include <queue>
#include <pthread.h>

using namespace std;

queue<int> Q;

pthread_mutex_t gmutex;

pthread_cond_t gcond;

void *producer_func(void *args) {

	pthread_exit((void *)0);
}

void *consumer_func(void *args) {

	pthread_exit((void *)0);
}


int main() {
	pthread_mutex_init(&gmutex, NULL);
	pthread_cond_init(&gcond, NULL);

	return 0;
}
