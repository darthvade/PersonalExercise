#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREAD 5
	
pthread_mutex_t mutex;

void *func(int *t) {
	pthread_mutex_lock(&mutex);
	cout << endl;
	cout << "func started" << endl;
	cout << *t << endl;
	*t += 1;
	cout << *t << endl;
	cout << "func finished" << endl;
	cout << endl;
	pthread_mutex_unlock(&mutex);
	pthread_exit((void *) 0);
}

int main() {

	pthread_t thread[NUM_THREAD];
	int arg = 100;
	
	pthread_mutex_init(&mutex, NULL);

	//对不符合回调函数类型的进行强制类型转换
	for(int i = 0; i != NUM_THREAD; ++i) {
		pthread_create(thread + i, NULL, (void *(*)(void *))func, &arg);
	}

	pthread_mutex_destroy(&mutex);

	for(int i = 0; i != NUM_THREAD; ++i) {
		pthread_join(thread[i], NULL);
	}

	cout << "main finished!" << endl;

	pthread_exit(NULL);
}
