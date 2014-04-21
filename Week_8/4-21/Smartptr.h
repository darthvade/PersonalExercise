#ifndef __SMARTPTR_H__
#define __SMARTPTR_H__

#include "String.h"

class Smartptr {
public:
	Smartptr();
	Smartptr(String *);
	~Smartptr();

	void reset(String *);
	const String *getptr() const;
private:
	String *_ptr;
};


#endif
