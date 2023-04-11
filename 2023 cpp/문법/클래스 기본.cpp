//c++
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
	//생성자는 반환형을 쓰지 않는다
	//생성자를 정의하지 않으면 dafault로 매개변수가 없는 생성자가 정의된다.
	Student() {
		number = 2202;
		name = "강효림";
		tel = "010-1234-5678";
		major = "뉴미디어소프트웨어과";
		adress = "서울 강서구";
	}

	Student(int _number, string _name, string _tel, string _major, string _adress) 
		//멤버변수 초기화. const/참조형 멤버변수 사용가능
		: number(_number), name(_name), tel(_tel), major(_major), adress(_adress)
	{

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

	//정적할당 : 컴파일 시간에 메모리 크기가 결정됨
	//Student stu2 = Student(2202, "강효림", "010-0000-1111", "뉴미디어소프트웨어", "서울");
	//stu2.print();

	//동적할당 :  실행시간(run time)에 메모리크기가 결정됨(메모리 heap영역)
	//동적할당된 공간은 포인터로 접근한다.
	Student* stu3 = new Student(22, "율곡", "010-0000-2222", "유교", "한성");
	stu3->print();

	//동적할당 해제(안하면 메모리 누수현상 발생)
	delete stu3;

	return 0;
}
