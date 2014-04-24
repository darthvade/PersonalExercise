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
	int& operator[] (const unsigned int index) const;
	unsigned int size();
	unsigned int capacity();
private:
	int *_myptr;
	unsigned int _size;
	unsigned int _capacity;
};


#endif
