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

	fstream fs2("./input.txt");
	fstream fs3("./output.txt");
	string line;
	while(getline(fs2, line)) {
		istringstream is(line);		
		string word;
		while(is >> word) {
			map<string, string>::iterator rent = mp.find(word);	
			if(rent != mp.end()) {
				fs3 << rent->second;	
			}
		}
	}

	return 0;
}
