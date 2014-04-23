#include "Condition.h"

Condition::Condition() {
	pthread_cond_init(&_cond, NULL);
}

Condition::~Condition() {
	pthread_cond_destroy(&_cond);
}

void Condition::wait() {

}

void Condition::notify() {

}

void Condition::notifyall() {

}
