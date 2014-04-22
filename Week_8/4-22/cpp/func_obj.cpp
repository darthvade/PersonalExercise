#include <iostream>

class Absint {
	int operator() (int val) {
		return (val > 0) ? val : -val;
	}
};

int main() {

	return 0;
}
