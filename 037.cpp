#include <iostream>
#include <string>

using namespace std;

// 단어의 개수

int main() {
	string str;
	getline(cin, str);
	
	int num = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {   // 공백인 경우
			num++;
		}
	}

	if (str[0] == ' ') {   // 처음 공백이 올 경우
		num--;
	}

	if (str[str.length() - 1] == ' '){   // 맨 뒤가 공백일 경우
		num--;
	}

	cout << num;
}
