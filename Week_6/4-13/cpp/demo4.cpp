class X {
	private:
		int data;
	public:
		void setData(int &input) const{
			this->data = input; // error!
		}
};

int main() {

	return 0;
}
