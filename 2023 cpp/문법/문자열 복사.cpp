#include <stdio.h>
#include <string.h>		//문자열 함수 들어있음

int main() {
	char str1[30] = "";
	char str2[30] = "Jiwoo";
	
	//str1(목적지)에 str2 내용을 넣겠다
	strcpy(str1, str2);

	printf("%s \n", str1);

	return 0;
}