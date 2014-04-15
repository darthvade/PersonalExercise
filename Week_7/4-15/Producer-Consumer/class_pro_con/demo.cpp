#include "WorkingQueue.h"
#include "ProducerThread.h"
#include "ConsumerThread.h"

int main() {
	WorkingQueue wq;

	ProducerThread pro_t(&wq);
	ConsumerThread con_t(&wq);

	return 0;
}
