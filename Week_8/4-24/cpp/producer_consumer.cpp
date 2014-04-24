#include <iostream>
#include <pthread.h>
#include <queue>

#define N 5

pthread_mutex_t mutex;
pthread_cond_t empty;
pthread_cond_t full;


std::queue<int> source;

void *consumer(void *) {
	while(true) {
		pthread_mutex_lock(&mutex);	

		/***********************************/
		while(source.empty()) {
			pthread_cond_wait(&empty, &mutex);	
		}	
		if(source.size() == N) {
			pthread_cond_wait(&full, &mutex);
		}
		std::cout << "push A 999" << std::endl;
		source.push(999);
		/***********************************/

		pthread_mutex_unlock(&mutex);
	}
	pthread_exit(0);
}

void *producer(void *) {
	while(true) {
		pthread_mutex_lock(&mutex);	

		/***********************************/
		while()
		/***********************************/

		pthread_mutex_unlock(&mutex);
	}
	pthread_exit(0);
}


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
