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
	bool operator!= (const MyVector&) const;
private:
	int *_myptr;
	unsigned int _size;
	unsigned int _capacity;
};


#endif
