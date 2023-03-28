//c
#include <stdio.h>
#include <string.h>

//c++
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "Hello";
	string str2 = "World";

	 
	// 문자열 비교 (인자의 순서와 반환값이 헷갈림)
	if (str1 == str2) {
		cout << "str1 == str2";
	}
	//str1ㅣ이 str2보다 사전에 늦게 나오는 경우
	else if (str1 < str2) {
		cout << "str1 < str2";
	}
	else if(str1 == str2) {
		cout <<"str1 > str2";
	}

	return 0;
}