#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	void print() { 
		cout << "id: " << _id << " name: " << _name << endl;   
	}	
private:
	int _id;
	string _name;
};

class Student : public Person {

};
