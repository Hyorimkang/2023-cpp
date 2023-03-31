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
	int number;
	string name;
	string tel;
	string major;
	string adress;
};

int main() {
	//자료형 : Student (class 생략가능)
	class Student 학생정보;
	학생정보.number = 2202;
	학생정보.name = "강효림";
	학생정보.tel = "010-1234-5678";
	학생정보.major = "뉴미디어소프트웨어과";
	학생정보.adress = "서울 강서구";
	
	cout << "학번 : " << 학생정보.number << endl;
	cout << "이름 : " << 학생정보.name << endl;
	cout << "전화번호 : " << 학생정보.tel << endl;
	cout << "학과 : " << 학생정보.major << endl;
	cout << "주소 : " << 학생정보.adress << endl;

	return 0;
}