#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main() {
	map<string, string> fruit;

	fruit["���"] = "apple";
	fruit["�ٳ���"] = "banana";
	fruit["������"] = "peach";

	cout << fruit["���"] << endl;

	map<string, int>::iterator iter;
	for (iter = fruit.begin(); iter != fruit.end(); iter++) {
		cout << iter->first << "�� ����� " << iter->second << endl;
	}

	return 0;
}