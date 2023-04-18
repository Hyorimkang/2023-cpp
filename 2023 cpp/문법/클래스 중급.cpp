#include <iostream>
#include <String.h>

using namespace std;

class MString {
public :
	MString(const char* str) {
		unsigned int l = strlen(str);
		c_str_ = new char[l+1];  //'\0'(널문자)가 들어갈 공간 +1
		strcpy(c_str_, str);
		size_ = l;
	}
	unsigned int size(void) {
		return size_;
	}
	char* c_str(void) {
		return c_str_; //_(언더 스코어) 멤버변수라는 뜻
	}
private:
	unsigned int size_; //문자열의 길이
	char* c_str_; //문자열의 시작주소
};

int main() {
	MString* str = new MString("I will be back");
	cout << str->c_str() << endl;
	return 0;
}