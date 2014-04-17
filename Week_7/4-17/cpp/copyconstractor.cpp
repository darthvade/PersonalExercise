#include <iostream>

using namespace std;

class Demo {
public:
	Demo() {
		cout <<	"constractor" << endl;
	}
	Demo(const Demo&) {
	
	}
};
