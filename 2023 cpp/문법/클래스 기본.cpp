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
	int number;
	string name;
	string tel;
	string major;
	string adress;

	//생성자(constructor) : 객체를 생성할 때 호출되는 함수
	//생성자를 정의하지 않으면 dafault로 매개변수가 없는 생성자가 정의된다.
	//Student() {}

	//class는 멤버함수를 가질 수 있다.
	void print(void) {
		cout << "학번 : " << number << endl;
		cout << "이름 : " << name << endl;
		cout << "전화번호 : " << tel << endl;
		cout << "학과 : " << major << endl;
		cout << "주소 : " << adress << endl;
	}
};

int main() {
	//자료형 : Student (class 생략가능)
	class Student stu1;
	stu1.number = 2202;
	stu1.name = "강효림";
	stu1.tel = "010-1234-5678";
	stu1.major = "뉴미디어소프트웨어과";
	stu1.adress = "서울 강서구";

	stu1.print();


	return 0;
}

