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
private:
	int *_iptr;
};

int main() {


	return 0;
}
