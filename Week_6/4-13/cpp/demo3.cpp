#include <iostream>

using namespace std;

void fun(int (&input)[5]) {
	cout << *input << endl;	
}

int main() {

	int arr[5] = {1, 2, 3, 4, 5};
	fun(arr);

}
