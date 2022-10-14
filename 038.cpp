#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// 딸기 있나요?

int main() {
	string data = "딸기";

	vector<string>name_list({ "딸기", "바나나", "사과" });

	if (find(name_list.begin(), name_list.end(), data) != name_list.end()) { 
		cout << "있어용" << endl; 
	}
	else { 
		cout << "없어용" << endl; 
	}
}
