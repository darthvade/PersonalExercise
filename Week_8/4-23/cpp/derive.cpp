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


int main() {

	return 0;
}
