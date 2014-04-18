#include <iostream>

class Integer {
public:
	Integer() {
		_iptr = new int;	
		*_iptr = 0;
	}
	Integer(const int i) {
		_iptr = new int(i);
	}
	Integer(const Integer &i) {
		_iptr = i._iptr;
	}
	Integer& operator=(const Integer &i) {
		_iptr = i._iptr;	
		return *this;
	}
	~Integer() {
		delete _iptr;
	}
private:
	int *_iptr;
};

int main() {


	return 0;
}
