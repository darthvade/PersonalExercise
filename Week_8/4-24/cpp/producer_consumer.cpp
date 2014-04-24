#include <iostream>
#include <pthread.h>
#include <queue>

#define N 5

pthread_mutex_t mutex;
pthread_cond_t empty;
pthread_cond_t full;


void *consumer(void *) {

	pthread_exit(0);
}

void *producer(void *) {

	pthread_exit(0);
}

std::queue<int> source;

int main() {
	pthread_mutex_init(&mutex, NULL);
	pthread_cond_init(&empty, NULL);
	pthread_cond_init(&full, NULL);


	pthread_t t_cons, t_prot;
	pthread_create(&t_cons, NULL, consumer, NULL);
	pthread_create(&t_prot, NULL, consumer, NULL);


	pthread_join(t_cons, NULL);
	pthread_join(t_prot, NULL);

	return 0;
}
