#include <iostream>

using namespace std;

class MString {
public :
	MString(const char* str) {
		size_ = sizeof(str);
		c_str_ = str;
	}
	unsigned int size(void) {
		return size_;
	}
	const char* c_str(void) {
		return c_str_; //_(언더 스코어) 멤버변수라는 뜻
	}
private:
	unsigned int size_; //문자열의 길이
	const char* c_str_; //문자열의 시작주소
};

int main() {
	MString* str = new MString("I will be back");
	cout << str->c_str() << endl;
	return 0;
}