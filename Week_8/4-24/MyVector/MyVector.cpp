#include "MyVector.h"
#include <cstring>

MyVector::MyVector() : _myptr(0), _size(0), _capacity(0) {
	
}

MyVector::MyVector(int n) : _size(n), _capacity(n) {
	_myptr = new int[n];	
	memset(_myptr, 0, n);
}

MyVector::MyVector(int *begin, int *end) {
	if(begin <= end) {
		unsigned int n = end - begin;
		_size = n;
		_capacity = n;
		_myptr = new int[n];
		memcpy(_myptr, begin, n);
	}
}

MyVector::~MyVector() {
	delete[] _myptr;
}

MyVector::MyVector(const MyVector& other) {
	_myptr = new int[other._capacity];
	memcpy(_myptr, other._myptr, other._capacity);
	_size = other._size;
	_capacity = other._capacity;
}

bool MyVector::operator!= (const MyVector& other) const {
	if(this->_myptr != other._myptr) {
		return true;
	} else {
		return false;
	}
}

MyVector& MyVector::operator= (const MyVector& other) {
	if(*this != other) {
		delete[] this->_myptr;	
		this->_myptr = new int[other._capacity];
		memcpy(_myptr, other._myptr, other._capacity);
		this->_size = other._size;
		this->_capacity = other._capacity;
	} 	
	return *this;
}

unsigned int MyVector::size() {
	return _size;
}

unsigned int MyVector::capacity() {
	return _capacity;
}
	
int& MyVector::operator[] (const unsigned int index){
	return this->_myptr[index];
}

void MyVector::insert(int n, int elem) {

}


