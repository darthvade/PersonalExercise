#include <pthread.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void *func(void *t) {
	cout << *((string *)t) << endl;
	sleep(3);
	return (void *)0;
}

void func2() {
	sleep(8);
	cout << "once func" << endl;
	return ;
}

int main() {
	pthread_t thread;

	string s1 = "child thread 1 !";

	pthread_once_t one_contr = PTHREAD_ONCE_INIT;

	pthread_once(&one_contr, func2);

	pthread_create(&thread, NULL, func, &s1);

	pthread_join(thread, NULL);
	cout << "Prog finished!" << endl;
}
