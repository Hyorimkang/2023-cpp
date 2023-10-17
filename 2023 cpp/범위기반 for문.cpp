#include <iostream>

using namespace std;

int main(void) {
	double a[3] = { 5.6, 6.7, 7.8 };
	
	//누가봐도 a의 자료형은 int이다
	auto b = 4;

	//x의 자료형은 double로 자동설정
	for (auto x : a) {
		cout << a << endl;
	}
	return 0;
}