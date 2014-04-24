class Base {
public:
	static Base& Instanc() {
		static Base single;
		return single;
	}
private:
	Base();
	Base(const Base &);
	Base& operator=(const Base&);
	~Base();
};

int main() {
	Base::Instanc().Instanc().Instanc();
	return 0;
}
