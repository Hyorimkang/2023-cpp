#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

class Munja {
public:
	//일반생성자
	Munja(const char* qz) {
		// 3("abc") + 1('\0')
		str_ = new char[strlen(qz) + 1];
		strcpy(str_, qz);
		cout << "일반생성자 호출" << endl;
	}

	//복사생성자 (얕은 복사)
	Munja(const Munja& hj): str_(hj.str_)
	{
		cout << "복사생성자 호출" << endl;
	}

	~Munja() {
		delete[] str_;
		cout << "소멸자 호출" << endl;
	}

private:
	char* str_;
};

int main() {
	Munja m1 = Munja("abc"); //일반생성자 호출
	Munja m2 = m1; //복사생성자 호출

	return 0;
}