//c
#include <stdio.h>
#include <string.h>

//c++
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1= "Jiwoo";
	string str2 = "Rock";

	//str2의 문자열을 str1(목적)에 추가
	str1 = str1 + str2;

	cout << str1 << endl;

	return 0;
}