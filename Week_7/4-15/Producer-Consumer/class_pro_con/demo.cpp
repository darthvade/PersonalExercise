#include "WorkingQueue.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"

int main() {
	WorkingQueue wq;

	ProducerThread pro_t(&wq, 1);
	ProducerThread pro_t2(&wq, 1);
	ProducerThread pro_t3(&wq, 2);
	ConsumerThread con_t(&wq, 2);

	pro_t.start();
	pro_t2.start();
	pro_t3.start();
	con_t.start();

	pro_t.join();
	pro_t2.join();
	pro_t3.join();
	con_t.join();

	return 0;
}
