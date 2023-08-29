#include <iostream>

using namespace std;

class Animal {
public:
	void bark(void) {

	}
private:
	int leg_num_;
};

class Dog : public Animal {
public:
	void bark(void) {
		cout << "港港" << endl;
	}
private:
	int speed;
};

class Cat : public Animal {
public:
	void bark(void) {
		cout << "具克" << endl;
	}
private:
	int claw;
};

int main() {
	Animal a;
	Dog d;
	Cat c;

	a.bark();
	d.bark();
	c.bark();

	return 0;
}