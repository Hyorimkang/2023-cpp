#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, string> fruit;
	string word;

	fruit["사과"] = "apple";
	fruit["바나나"] = "banana";
	fruit["포도"] = "grape";

	map<string, string>::iterator iter;
	for (iter = fruit.begin(); iter != fruit.end(); iter++) {
		cout << iter->first << "는 영어로 " << iter->second << endl;
	}
	return 0;
}