#include "Factory.h"
#include "unistd.h"

int main() {
	Factory factory(1, 1, 1, 1);
	factory.start_all();
//	sleep(1000);
//	factory.join_all();
	return 0;
}
