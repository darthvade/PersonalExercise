#include <iostream>

using namespace std;

class Demo {
public:
	Demo() {
		cout <<	"constructor" << endl;
	}
	Demo(const Demo&) {
		cout <<	"copy constructor" << endl;
	}
};

int main() {
	Demo d = Demo();
	return 0;
}
