#include <iostream>
#include <queue>
#include <pthread.h>

using namespace std;

queue<int> Q;

pthread_mutex_t gmutex;

pthread_cond_t gcond;

void *producer_func(void *args) {
	pthread_mutex_lock(&gmutex);
	
	Q.push(1);
	cout << "Push a num" << endl;
	pthread_cond_signal(&gcond);

	pthread_mutex_unlock(&gmutex);
	pthread_exit((void *)0);
}

void *consumer_func(void *args) {
	pthread_mutex_lock(&gmutex);

	while(Q.empty()) {
		pthread_cond_wait(&gcond, &gmutex);
	}
	int num = Q.front();
	Q.pop();
	cout << "get a num " << num << endl;

	pthread_mutex_unlock(&gmutex);
	pthread_exit((void *)0);
}


int main() {
	pthread_mutex_init(&gmutex, NULL);
	pthread_cond_init(&gcond, NULL);

	return 0;
}
