#ifndef __SMARTPTR_H__
#define __SMARTPTR_H__

#include "String.h"

class Smartptr {
public:
	Smartptr();
	Smartptr(String &);
	~Smartptr();
private:
	String *_ptr;
};


#endif
