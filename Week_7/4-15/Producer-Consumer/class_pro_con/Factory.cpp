#include "Factory.h"

Factory::Factory(
	std::size_t num_consumer,
	std::size_t fre_consumer,
	std::size_t num_producer,
	std::size_t fre_producer ) : 
	_num_consumer(num_consumer), 
	_fre_consumer(fre_consumer),
	_num_producer(num_producer),
	_fre_producer(fre_producer) {
	for(std::size_t i = 0; i != _num_producer; ++i) {
		ProducerThread temp(&_wq, fre_producer, &_cout_lock);
		ProducerThread &p = temp;
		_vproducer.push_back(p);
	}	
	for(std::size_t i = 0; i != _num_consumer; ++i) {
		ConsumerThread(&_wq, fre_producer, &_cout_lock);	
	}
}

Factory::~Factory() {

}
