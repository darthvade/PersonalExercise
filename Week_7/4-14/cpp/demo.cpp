#include <iostream>

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


int main() {

	return 0;
}
