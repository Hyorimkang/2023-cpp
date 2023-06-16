﻿#include <iostream>

using namespace std;

class Animal {
public:
	Animal(int age, string name):age_(age), name_(name) {
		cout << "동물 생성자" << endl;
	}
	~Animal() {
		cout << "동물 소멸자" << endl;
	}

	//동적바인딩
	virtual void Bark(void) {
		cout << "짖는다" << endl;
	}
	virtual void Eat(void) {
		cout << "먹는다" << endl;
	}
	virtual void Hunt(void) {
		cout << "사냥한다" << endl;
	}
private:
	int age_;
	string name_;
};

//두루미
class Crane : public Animal{
public:
	//별도의 언급이 없어도 매개변수가 없는 부모생성자가 호출된다.
	Crane(int age, string name, int leg_length) : Animal(age, name){
		cout << "두루미 생성자" << endl;
		leg_length_ = leg_length;
	}
	~Crane() {
		cout << "두루미 소멸자" << endl;
	}

	void Bark() {
		cout << "두루두루" << endl;
	}
private:
	int leg_length_;
};

int main() {
	Animal* animal = new Animal(18, "동물이");
	animal->Bark();
	delete animal;  //동물짖는다


	animal = new Crane(3, "지우", 108);  //부모의 멤버변수를 사용
	animal->Bark();    //두루두루

	delete animal;
	return 0;
}