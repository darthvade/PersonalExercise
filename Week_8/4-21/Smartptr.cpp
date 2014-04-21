#include "Smartptr.h"

Smartptr::Smartptr() : _ptr(NULL){

}

Smartptr::Smartptr(String *p) : _ptr(p) {

}

Smartptr::~Smartptr() {
	delete _ptr;
}

void Smartptr::reset(String *p) {
	if(p != _ptr) {
		delete _ptr;
		_ptr = p;
	}	
}

