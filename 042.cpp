#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

// 가위바위보 게임

// 게임의 진행 횟수는 총 5판
// 만약 가위, 바위, 보 말고 다른 것을 낼 경우 다시 반복

int main() {
	for (int i = 0; i < 5; i++){
	EXIT_01:    // goto 함수를 써서 이쪽으로 이동시키게 함

		srand(time(NULL));

		int num, comNum;
		comNum = rand() % 3;    // 0부터 2까지 자연수

		cout << "무엇을 낼 건가요? (0: 가위 , 1: 바위 , 2: 보 ) " << endl;
		cin >> num;

		cout << "(Loading...)" << endl;
		Sleep(2000);    // 2초 딜레이

		cout << "컴퓨터 : " << comNum << endl;

		if (num == comNum){
			cout << "-----둘이 비겼습니다.-----" << endl;
		}
		else if (num == 0){
			if (comNum == 1)
				cout << "-----컴퓨터가 이겼습니다.-----" << endl;
			else
				cout << "-----플레이어가 이겼습니다.-----" << endl;
		}
		else if (num == 1){
			if (comNum == 2)
				cout << "-----컴퓨터가 이겼습니다.-----" << endl;
			else
				cout << "-----플레이어가 이겼습니다.-----" << endl;
		}
		else if (num == 2){
			if (comNum == 0)
				cout << "-----컴퓨터가 이겼습니다.-----" << endl;
			else
				cout << "-----플레이어가 이겼습니다.-----" << endl;
		}
		else {
			cout << "다시 내주세요." << endl;
			goto EXIT_01;    // 만약 0~2까지의 숫자 외에 다른 숫자를 쓴다면 다시 내라고 함.
		}

		cout << "\n";

		Sleep(3000);   // 3초 딜레이
		//system("cls");    // 이 함수는 콘솔 창에 나온 모든 내용을 다 지움
	}
}
