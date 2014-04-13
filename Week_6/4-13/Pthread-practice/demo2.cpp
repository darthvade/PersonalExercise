#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void *func(void *t) {
	int temp = (int)t;
	cout << temp << endl;
	return (void *)0;
}

int main() {

	pthread_t thread;
	int arg = 100;
	pthread_create(&thread, NULL, func, &arg);

	pthread_join(thread, NULL);

	return 0;
}
