#include <pthread.h>
#include <iostream>

using namespace std;

void *func(void *t) {
	cout << (int)*t << endl;
}
