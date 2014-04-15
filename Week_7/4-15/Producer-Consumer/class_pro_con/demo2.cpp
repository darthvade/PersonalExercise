#include "Factory.h"
#include "unistd.h"

int main() {
	Factory factory(9, 1, 6, 1);
	factory.start_all();
	factory.join_all();
	return 0;
}
