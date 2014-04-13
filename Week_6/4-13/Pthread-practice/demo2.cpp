#include <iostream>
#include <pthread.h>
#include <unistd.h>

void *func(void *t) {
	(int)(*t) = (int)(*t) + 1;
	return NULL;
}

int main() {

	return 0;
}
