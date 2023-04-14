//c++
#include <iostream>
#include <string>

using namespace std;


class Employee {

public:
	Employee() {
		name_ = "강효림";
		id_ = 1111;
		age_ = 18;
		salary_ = 1000;
	}

	Employee(string name, int id, int age, double salary)
		: name_(name), id_(id), age_(age), salary_(salary)
	{
		
	}

	void PrintInfo() {
		cout << "이름 : " << name_ << endl;
		cout << "사번 : " << id_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "급여 : " << salary_ << endl;
	}


private:
	string name_;
	int id_;
	int age_;
	double salary_;
};


int main() {

	Employee* emp1 = new Employee("강효림", 1111, 18, 1000);
	emp1->PrintInfo();

	delete emp1;

	Employee* emp2 = new Employee[2];
	for (int i = 0; i < 1; i++) {
		emp2[i].PrintInfo();
	}
	
	delete[] emp2;


	return 0;
}
