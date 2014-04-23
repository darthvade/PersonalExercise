#include <iostream>

using namespace std;

class Base {
public:
	Base() {
		cout << "Base constractor!" << endl;
	}
	~Base() {
		cout << "Base destractor!" << endl;
	}
};

class Child : public Base {
	
};


int main() {
	Child d;
	return 0;
}
