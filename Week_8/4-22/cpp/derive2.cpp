#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	void print() { 
		cout << "id: " << _id << " name: " << _name << endl;   
	}	
	void setinfo(int id, const string &s) {
		_id = id;
		_name = s;
	}
private:
	int _id;
	string _name;
};

class Student : public Person {
private:
	string school;
};
