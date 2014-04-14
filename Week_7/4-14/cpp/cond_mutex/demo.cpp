#include "Thread.h"

int main() {
	Thread p(5);
	p.start();
	p.join();
	return 0;
}
