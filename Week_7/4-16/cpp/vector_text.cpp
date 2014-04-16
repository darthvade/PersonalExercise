#include <vector>
#include <iostream>

using namespace std;

int main() {

	vector<int> vec1(10, 88);
	for(std::size_t ix = 0; ix != vec1.size(); ++ix) {
		cout << vec1[ix] << endl;
	}


}
