#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main() {

	map<string, string> mp;

	fstream fs("./code.txt");
	string left, right;
	while(fs >> left >> right) {
		mp.insert(make_pair(left, right));	
	}
	fs.clear();
	fs.close();

	fs = file_open("./input.txt");
	return 0;
}
