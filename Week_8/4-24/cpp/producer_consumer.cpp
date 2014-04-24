#include <iostream>
#include <pthread.h>
#include <vector>

pthread_mutex_t mutex;
pthread_cond_t empty;
pthread_cond_t full;

int main() {
	pthread_mutex_init(&mutex, NULL);
	pthread_cond_init(&empty, NULL);
	pthread_cond_init(&full, NULL);


	return 0;
}
