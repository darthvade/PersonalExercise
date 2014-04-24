#ifndef __MYCOMPLEX_H__
#define __MYCOMPLEX_H__

#include <iostream>

class MyComplex {
	friend std::ostream& operator<< (std::ostream&, const MyComplex&);
public:
	MyComplex();
	MyComplex(int, int);
	MyComplex(const MyComplex&);
	MyComplex& operator=(const MyComplex&);
	~MyComplex();
private:
	int _r;
	int _i;
};

std::ostream& operator<< (std::ostream& os, const MyComplex& cplx) {
	os <<  cplx.
}

#endif
