#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> vec(30);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;
	return 0;
}
