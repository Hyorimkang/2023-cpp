//c
#include <stdio.h>
#include <string.h>

//c++
#include <iostream>
#include <string>

using namespace std;

int main() {
	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	//str2의 문자열을 str1(목적)에 추가
	strcat(str1, str2);

	printf("%s", str1);

	return 0;
}