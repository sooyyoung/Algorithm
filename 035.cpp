#include <iostream>
using namespace std;

// �������� ����

int main() {
	int num[5], i, arr;

	for (i = 0; i < 5; i++){
		cout << i + 1 << "��° ���� �Է����ּ���: ";
		cin >> num[i];
	}
	
	cout << "�������� ���� : ";
	for (i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (num[j] > num[i]) {
				arr = num[i];
				num[i] = num[j];
				num[j] = arr;
			}
		}
		cout << num[i] << " ";
	}
}