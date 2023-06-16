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
		cout << "이름 : " << name_ << endl;
		cout << "학번 : " << hakbun_ << endl;
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
		cout << "대학교 : " << univercity_ << endl;
	}
private:
	string univercity_;
};

int main() {
	Student* std = new Student("강효림", 1111, "서울");
	
	delete std;
	return 0;
}