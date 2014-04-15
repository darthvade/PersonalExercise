#include "WorkingQueue.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"

int main() {
	WorkingQueue wq;

	ProducerThread pro_t(&wq);
	ProducerThread pro_t2(&wq);
	ProducerThread pro_t3(&wq);
	ConsumerThread con_t(&wq);

	pro_t.start();
	pro_t2.start();
	pro_t3.start();
	con_t.start();

	pro_t.join();
	con_t.join();

	return 0;
}
