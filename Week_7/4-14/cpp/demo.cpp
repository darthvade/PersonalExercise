#include <iostream>

using namespace std;

class Data {
	public:
		void setData(const int &data);
		int &getData();
	private:
		int _data;
};

void Data::setData(const int &data) {
	this->_data = data;
}

int &Data::getData() {
	return this->_data;
}

int main() {
	int& (*pfun)();
	Data d;
	d.setData(89);
	pfun = d.getData();
	cout << d.getData() << endl;
	return 0;
}
