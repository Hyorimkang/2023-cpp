//c
#include <stdio.h>
#include <string.h>

//c++
#include <iostream>
#include <string>

using namespace std;

int main() {
	char str1[50] = "Hello";
	char str2[50] = "World";

	int result = strcmp(str1, str2);
	 
	// 문자열 비교 (인자의 순서와 반환값이 헷갈림)
	if (result == 0) {
		printf("str1 == str2");
	}
	else if (result == -1) {
		printf("str1 < str2");
	}
	else if(result == 1) {
		printf("str1 > str2");
	}


	return 0;
}