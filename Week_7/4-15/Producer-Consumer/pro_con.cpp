#include <iostream>
#include <queue>
#include <pthread.h>

using namespace std;

queue<int> Q;

void *producer_func(void *args) {

	pthread_exit((void *)0);
}

void *consumer_func(void *args) {

	pthread_exit((void *)0);
}


int main() {

	return 0;
}
