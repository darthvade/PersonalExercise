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
	MyVector vec3(a, a + 1);
	cout << vec1.size() << " " << vec1.capacity() << endl; 
	cout << vec2.size() << " " << vec2.capacity() << endl; 
	cout << vec3.size() << " " << vec3.capacity() << endl; 
	cout << vec1 << endl;
	cout << vec2 << endl;
	cout << vec3 << endl;
	return 0;
}
