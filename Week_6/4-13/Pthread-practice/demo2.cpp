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

	return 0;
}
