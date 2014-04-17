#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
	fstream fs("./input.txt");	
	map<string, int> counter;
	string temp;
	while(fs >> temp) {
		++counter[temp];
	}
	return 0;
}
