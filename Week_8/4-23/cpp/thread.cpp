#include <iostream>
#include <pthread.h>
#include <cstddef>

void *func(void *) {

	pthread_exit(0);
}

int main() {
	
	pthread_t tid;
	pthread_create(&tid, NULL, func, NULL);

	pthread_join(&tid, NULL);

	return 0;
}
