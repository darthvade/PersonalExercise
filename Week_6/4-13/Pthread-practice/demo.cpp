#include <pthread.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void *func(void *t) {
	sleep(3);
	cout << (int)t << endl;
}

int main() {
	pthread_t thread;

	string s = "child thread!";

	pthread_create(&thread, NULL, func, );

	pthread_join(thread, NULL);
	cout << "Prog finished!" << endl;
}
