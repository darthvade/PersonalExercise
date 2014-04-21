#include "Smartptr.h"

#include <iostream>

using namespace std;

Smartptr::Smartptr() : _ptr(NULL){

}

Smartptr::Smartptr(String *p) : _ptr(p) {
	cout << "constractor!" << endl;
}

Smartptr::~Smartptr() {
	cout << "destractor!" << endl;
	delete _ptr;
}

void Smartptr::reset(String *p) {
	if(p != _ptr) {
		delete _ptr;
		_ptr = p;
	}	
}

