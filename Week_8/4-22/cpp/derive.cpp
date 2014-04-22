#include <iostream>

using namespace std;

class A {
public:
	A(int a) : num(a){};
	void test() {
		cout << "in Class A " << num << endl;
	}
private:
	int num;
};

int main() {

	return 0;
}
