#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, string> fruit;
	string word;

	fruit["���"] = "apple";
	fruit["�ٳ���"] = "banana";
	fruit["����"] = "grape";

	map<string, string>::iterator iter;
	for (iter = fruit.begin(); iter != fruit.end(); iter++) {
		cout << iter->first << "�� ����� " << iter->second << endl;
	}
	return 0;
}