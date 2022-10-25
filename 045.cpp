#include <iostream>
#include <string>

using namespace std;

// 수박수박수박수박수박수

// 길이가 n이고, "수박수박수박수...."와 같은 패턴을 유지하는 문자열을 리턴하는 함수
// 3 -> "수박수"
// 4 -> "수박수박"

string solution(int n) {
  string answer = "";
	for (int i = 0; i < n; i++){
	  if (i % 2 == 0){
		  answer += "수";
		}
	  else {
		  answer += "박";
		}
	}
  return answer;
}

int main() {
  cout << solution(3) << endl;
  return 0;
}
