#include <iostream>

using namespace std;

int main(void) {
	double a[3] = { 5.6, 6.7, 7.8 };
	
	//�������� a�� �ڷ����� int�̴�
	auto b = 4;

	//x�� �ڷ����� double�� �ڵ�����
	for (auto x : a) {
		cout << a << endl;
	}
	return 0;
}