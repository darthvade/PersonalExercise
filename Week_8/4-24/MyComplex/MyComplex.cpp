#include "MyComplex.h"

MyComplex::MyComplex() : _r(0), _i(0){}

MyComplex::MyComplex(int r, int i) : _r(r), _i(i) {}

MyComplex::~MyComplex() {};

MyComplex::MyComplex(const MyComplex& other) {
	_r = other._r;
	_i = other._i;
}

MyComplex& MyComplex::operator=(const MyComplex& other) {
	_r = other._r;
	_i = other._i;
	return *this;
}
