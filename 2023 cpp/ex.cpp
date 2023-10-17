#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main() {
	map<string, string> fruit;

	fruit["사과"] = "apple";
	fruit["바나나"] = "banana";
	fruit["복숭아"] = "peach";

	cout << fruit["사과"] << endl;

	map<string, int>::iterator iter;
	for (iter = fruit.begin(); iter != fruit.end(); iter++) {
		cout << iter->first << "는 영어로 " << iter->second << endl;
	}

	return 0;
}