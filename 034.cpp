#include <iostream>
using namespace std;

// 오름차순 정렬

int main() {
	int num[5], i, arr;

	for (i = 0; i < 5; i++){
		cout << i + 1 << "번째 수를 입력해주세요: ";
		cin >> num[i];
	}
	
	cout << "오름차순 정렬 : ";
	for (i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++){
			if (num[i] > num[j]) {
				arr = num[i];
				num[i] = num[j];
				num[j] = arr;
			}
		}
		cout << num[i] << " ";
	}
}
