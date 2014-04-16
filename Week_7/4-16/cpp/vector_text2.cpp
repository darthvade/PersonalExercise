#include <iostream>
#include <vector>
#include <exception>

using namespace std;

int main() {

	vector<int> vec;
	cout << vec.max_size() << endl;
	try {
		vec.at(3);
	} catch (exception e) {
		e.what();
	}

	return 0;
}
