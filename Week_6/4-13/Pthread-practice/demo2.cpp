#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREAD 5

void *func(int *t) {
	*t += 1;
	cout << *t << endl;
	return (void *)0;
}

int main() {

	pthread_t thread[NUM_THREAD];
	int arg = 100;
	//对不符合回调函数类型的进行强制类型转换
	for(int i = 1; i != NUM_THREAD; ++i) {
		pthread_create(&thread, NULL, (void *(*)(void *))func, &arg);
	}

	pthread_join(thread, NULL);

	return 0;
}
