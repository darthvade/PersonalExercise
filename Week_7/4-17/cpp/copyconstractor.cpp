#include <iostream>
#include <vector>

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


Demo func(Demo d) {

	return d;
}

int main() {
//	Demo d = Demo();
//	func(d);
	vector<Demo> vect(5);
	return 0;
}
