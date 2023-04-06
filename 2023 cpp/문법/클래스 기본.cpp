﻿//c++
#include <iostream>
#include <string>

using namespace std;


//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체 클래스는 일반적으로 단어의 첫글자를 대문자로 한다
//class는 디폴트가 private (struct는 디폴트가 public)
class Student {
	//성능때문에 number는 문자열로 하지 않음
	//일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교해야함


public:
	//생성자(constructor) : 객체를 생성할 때 호출되는 함수
	//생성자를 정의하지 않으면 dafault로 매개변수가 없는 생성자가 정의된다.
	Student() {
		number = 2202;
		name = "강효림";
		tel = "010-1234-5678";
		major = "뉴미디어소프트웨어과";
		adress = "서울 강서구";
	}

	Student(int number, string name, string tel, string major, string adress) {
		//this : 객체 자기 자신을 가리키는 포인터(주소값)
		//멤버변수와 매개변수가 이름이 같아도 구별가능
		this->number = number;
		this->name = name;
		this->tel = tel;
		this->major = major;
		this->adress = adress;
	}

	//class는 멤버함수를 가질 수 있다.
	void print(void) {
		cout << "학번 : " << number << endl;
		cout << "이름 : " << name << endl;
		cout << "전화번호 : " << tel << endl;
		cout << "학과 : " << major << endl;
		cout << "주소 : " << adress << endl;
	}
private:
	int number;
	string name;
	string tel;
	string major;
	string adress;

};

int main() {
	//매개변수가 없는 생성자
	Student stu1 = Student();
	//stu1.print();

	Student stu2 = Student(2202, "강효림", "010-0000-1111", "뉴미디어소프트웨어", "서울");
	stu2.print();



	return 0;
}
