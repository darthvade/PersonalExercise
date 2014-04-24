#ifndef __MYVECTOR_H__
#define __MYVECTOR_H__

class MyVector {
public:
	MyVector();
	MyVector(int n);
	MyVector(int *, int *);
	~MyVector();
	MyVector(const MyVector&);
	MyVector& operator= (const MyVector&);
private:
	int *_myptr;
};


#endif
