#include <pthread.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void *func(void *t) {
//	sleep(3);
	cout << *((string *)t) << endl;
	sleep(3);
	return (void *)0;
}

int main() {
	pthread_t thread;

	string s = "child thread!";

	pthread_once_t one_contr = PTHREAD_ONCE_INIT;

	pthread_once(one_contr, func);

	pthread_create(&thread, NULL, func, &s);

	pthread_join(thread, NULL);
	cout << "Prog finished!" << endl;
}
