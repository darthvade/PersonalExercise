class X {
	private:
		int data;
	public:
		void setData(int &input) const{
			this->data = input; // error!
		}
		void setData(int &input) {
			this->data = input; // right!
		}

};

int main() {

	return 0;
}
