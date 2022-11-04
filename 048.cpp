#include <iostream>

using namespace std;

// 이상한 문자 만들기
// try hello world  --> TrY HeLlO WoRlD

// https://school.programmers.co.kr/learn/courses/30/lessons/12930

string solution(string s) {
    int index = 0;   // 공백을 기준으로 재시작하기 위한 인덱스

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {   // 공백일 경우,
            // 그 자리부터 다시 짝, 홀수를 카운트하기 위해 -1로 초기화
            // -1로 초기화해야 if문이 끝나고 index++을 통해 다음 알파벳부터 0으로 카운트된다.
            index = -1;
        }

        else {
            if (index % 2 == 0) {   // 인덱스를 기준으로 짝수부분
                s[i] = toupper(s[i]);   // 대문자로
            }

            else {                  // 인덱스를 기준으로 홀수부분
                s[i] = tolower(s[i]);   // 소문자로
            }
        }
        index++;                    // 인덱스값 증가
    }

    return s;
}

int main_2() {
    cout << solution("try hello world") << endl;
    return 0;
}
