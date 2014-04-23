#include "Threadpool.h"

int main() {
	Threadpool pool(10);
	pool.start_threadpool();
	return 0;
}
