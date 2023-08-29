#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Charactor {
public:
	Charactor(string name, T strength, T attack, T defence)
		: name_(name), strength_(strength), attack_(attack), defence_(defence){ }

	string get_name() { return name_; }
	void set_name(string name) { name_ = name; }

	T get_strength() { return strength_; }
	void set_strength(T strength) { strength_ = strength; }

	T get_attack() { return attack_; }
	void set_attack(T attack) { attack_ = attack; }

	T get_defence() { return defence_; }
	void set_defence(T defence) { defence_ = defence; }

	void print() {
		cout << "이름 : " << name_ << endl;
		cout << "체력 : " << strength_ << endl;
		cout << "공격 : " << attack_ << endl;
		cout << "방어 : " << defence_ << endl;
	}

private:
	string name_;
	T strength_;
	T attack_;
	T defence_;
};

int main() {
	Charactor<int>* c = new Charactor<int>("jelly", 10, 2, 1);
	c->print();

	delete c;
}