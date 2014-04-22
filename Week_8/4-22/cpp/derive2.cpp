#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(int id, const char *s) : _id(id), _name(s) {};
	void print() 
		cout << "id: " << _id << " name: " << _name << endl;   
	}	
protected:
	int _id;
	string _name;
};
