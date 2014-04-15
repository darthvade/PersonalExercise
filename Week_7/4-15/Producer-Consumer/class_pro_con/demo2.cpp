#include "Factory.h"
#include "unistd.h"

int main() {
	Factory factory(1, 1, 1, 1);
	factory.start_all();
	factory.create_one_producer(1);
	factory.join_all();
	return 0;
}
