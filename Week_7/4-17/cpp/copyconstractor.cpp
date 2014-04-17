#include <iostream>

using namespace std;

class Demo {
public:
	Demo() {
		cout <<	"constractor" << endl;
	}
	Demo(const Demo&) {
		cout <<	"copy constractor" << endl;
	}
};

int main() {
	Demo d = Demo();
	return 0;
}
