#include <iostream>
using namespace std;

// �������� ����

int main() {
	int num[5];
	int i, arr;

	for (i = 0; i < 5; i++){
		cout << i + 1 << "��° ���� �Է����ּ���: ";
		cin >> num[i];
	}
	
	cout << "�������� ���� : ";
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