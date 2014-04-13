#include <iostream>

using namespace std;

class X {
	private:
		int data;
	public:
		void setData(int &input) const{
//			this->data = input; // error!
			cout << input << endl;
		}
		void setData(int &input) {
			this->data = input; // right!
		}

};

int main() {

	return 0;
}
