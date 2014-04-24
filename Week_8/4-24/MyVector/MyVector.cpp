#include "MyVector.h"
#include <cstring>

MyVector::MyVector() : _myptr(0), _size(0), _capacity(0) {
	
}

MyVector::MyVector(int n) : _size(n), _capacity(n) {
	_myptr = new int[n];	
	memset(_myptr, 0, n);
}
