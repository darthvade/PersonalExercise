#include "MyVector.h"

MyVector::MyVector() : _myptr(0), _size(0), _capacity(0) {
	
}

MyVector::MyVector(int n) {
	_myptr = new int[n](0);	
}
