#include <iostream>

class Integer {
public:
	Integer() {
		_iptr = new int;	
		*_iptr = 0;
	}
private:
	int *_iptr;
};

int main() {


	return 0;
}
