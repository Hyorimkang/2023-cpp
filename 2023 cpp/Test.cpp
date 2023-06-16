#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(string name, int hakbun):name_(name), hakbun_(hakbun){
		PrintShow();
	}
	~Person(){ }

	void PrintShow() {
		cout << "�̸� : " << name_ << endl;
		cout << "�й� : " << hakbun_ << endl;
	}

private:
	string name_;
	int hakbun_;
};

class Student : public Person {
public:
	Student(string name, int hakbun, string univercity) : Person(name, hakbun) {
		univercity_ = univercity;
		PrintShow();
	}
	~Student() {}

	void PrintShow() {
		cout << "���б� : " << univercity_ << endl;
	}
private:
	string univercity_;
};

int main() {
	Student* std = new Student("��ȿ��", 1111, "����");
	
	delete std;
	return 0;
}