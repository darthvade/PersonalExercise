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

void func2() {
//	sleep(3);
	cout << *((string *)t) << endl;
	sleep(3);
	return ;
}

int main() {
	pthread_t thread;

	string s1 = "child thread 1 ! once";
	string s2 = "child thread 2 !";

	pthread_once_t one_contr = PTHREAD_ONCE_INIT;

	pthread_once(&one_contr, func2);

	pthread_create(&thread, NULL, func, &s2);

	pthread_join(thread, NULL);
	cout << "Prog finished!" << endl;
}
