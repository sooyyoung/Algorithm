#include <iostream>
#include <string>
#include <regex>

using namespace std;

// 신규 아이디 추천

// https://school.programmers.co.kr/learn/courses/30/lessons/72410

string solution(string new_id) {
	string answer = "";

	// step 1: 대문자를 소문자로 치환
	for (auto i = 0; i < new_id.size(); i++) {
		new_id[i] = tolower(new_id[i]);
	}

	// step 2: 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거
	new_id = regex_replace(new_id, regex("[^a-z0-9-_.]+"), "");

	// step 3: 마침표가 2번 이상 연속되면 하나 제거
	new_id = regex_replace(new_id, regex("[.]+"), ".");

	// step 4: 처음과 끝의 마침표 제거
	if (new_id[0] == '.') {
		new_id.erase(new_id.begin());
	}
	if (new_id[new_id.size() - 1] == '.') {
		new_id.erase(new_id.end() - 1);
	}

	// step 5: 빈 문자열이라면 "a" 대입
	if (new_id == "") {
		new_id = "a";
	}

	// step 6: 길이가 16 이상이면 16번째 문자부터 끝까지 제거 (제거 후 끝 마침표 제거)
	if (new_id.size() >= 16) {
		new_id.erase(15);
		if (new_id[new_id.size() - 1] == '.') {
			new_id.erase(new_id.end() - 1);
		}
	}

	// step 7: 길이가 2 이하라면 길이가 3이 될때까지 마지막 문자 추가
	if (new_id.size() == 1 || new_id.size() == 2) {
		char last_char = new_id[new_id.size() - 1];
		for (auto i = new_id.size(); i < 3; ++i) {
			new_id += last_char;
		}
	}

	answer = new_id;
	return answer;
}

int main() {
	cout << solution("...!@BaT#*..y.abcdefghijklm") << endl;
	return 0;
}
