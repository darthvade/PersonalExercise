#include "Factory.h"

Factory::Factory(
	int num_consumer,
	int fre_consumer,
	int num_producer,
	int fre_producer ) : 
	_num_consumer(num_consumer), 
	_fre_consumer(fre_consumer),
	_num_producer(num_producer),
	_fre_producer(fre_producer) {

}

Factory::~Factory() {

}
