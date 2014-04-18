#include <iostream>

class Integer {
public:
	Integer() {
		_iptr = new int;	
	}
private:
	*_iptr;
};

int main() {


	return 0;
}
