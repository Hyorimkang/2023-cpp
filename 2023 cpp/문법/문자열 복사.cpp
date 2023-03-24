#include <iostream>
#include <string>		//std:string 클래스

int main() {
	std::string str1;
	std::string str2 = "Jiwoo";
	
	//str1(목적지)에 str2 내용을 넣겠다
	str1 = str2;

	std::cout << str1 << std::endl;

	return 0;
}