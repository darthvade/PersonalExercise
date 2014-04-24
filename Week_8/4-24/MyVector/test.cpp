#include <iostream>
#include "MyVector.h"

using namespace std;

int main() {
	/*
	vector<int> vec(30);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;
	*/
	MyVector vec1;
	MyVector vec2(30);
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	MyVector vec3(a, a + 5);
	return 0;
}
