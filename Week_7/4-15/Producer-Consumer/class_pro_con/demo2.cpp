#include "Factory.h"
#include "unistd.h"

int main() {
	Factory factory(1, 1, 1, 1);
	factory.start_all();
	factory.join_all();
	return 0;
}
