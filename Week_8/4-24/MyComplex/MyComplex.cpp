#include "MyComplex.h"

MyComplex::MyComplex() : _r(0), _i(0){}

MyComplex::~MyComplex() {};

MyComplex::MyComplex(const MyComplex& other) {
	_r = other._r;
	_i = other._i;
}
