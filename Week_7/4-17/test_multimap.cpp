#include <iostream>
#include <map>

using namespace std;

int main() {

	multimap<string, string> mp;
	mp.insert("aaa", "hehe1");
	mp.insert("aaa", "hehe2");
	mp.insert("aaa", "hehe3");
	mp.insert("aaa", "hehe4");

	mp.insert("bbb", "hello!1");
	mp.insert("bbb", "hello!2");
	mp.insert("bbb", "hello!3");
	
	return 0;
}
