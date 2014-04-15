#include "WorkingQueue.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"

int main() {
	WorkingQueue wq;

	ProducerThread pro_t(&wq);
	ConsumerThread con_t(&wq);

	pro_t.start();
	con_t.start();

	pro_t.join();
	con_t.join();

	return 0;
}
