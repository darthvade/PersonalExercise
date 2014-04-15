#include <iostream>
#include <queue>
#include <pthread.h>
#include <unistd.h>

using namespace std;

queue<int> Q;

pthread_mutex_t gmutex;

pthread_cond_t gcond;

void *producer_func(void *) {
	while(1) {
		sleep(1);

 		pthread_mutex_lock(&gmutex);
 			 
 		Q.push(1);
 		cout << "Push a num" << endl;
 		pthread_cond_signal(&gcond);
 
		sleep(1);

 		pthread_mutex_unlock(&gmutex);
	}
	pthread_exit((void *)0);
}

void *consumer_func(void *args) {
	while(1){
		pthread_mutex_lock(&gmutex);

		while(Q.empty()) {
			pthread_cond_wait(&gcond, &gmutex);
		}
		int num = Q.front();
		Q.pop();
		cout << "consumer" << args << " get a num " << num << endl;

		sleep(2);

		pthread_mutex_unlock(&gmutex);
	}
	pthread_exit((void *)0);
}


int main() {
	pthread_mutex_init(&gmutex, NULL);
	pthread_cond_init(&gcond, NULL);

	pthread_t thread[3];
	
	pthread_create(&thread[0], NULL, producer_func, NULL);
	pthread_create(&thread[1], NULL, consumer_func, (int)1);
	pthread_create(&thread[2], NULL, consumer_func, (int)2);

		
	pthread_join(thread[0], NULL);
	pthread_join(thread[1], NULL);
	return 0;
}
