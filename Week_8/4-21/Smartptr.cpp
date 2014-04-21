#include "Smartptr.h"

Smartptr::Smartptr() : _ptr(NULL){

}

Smartptr::Smartptr(String *p) : _ptr(p) {

}
