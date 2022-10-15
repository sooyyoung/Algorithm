#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 중복된 숫자 제거

int main() {
	vector<int> v = { 1, 3, 2, 1, 8, 3, 5, 2, 6, 5, 8 };

	// 정렬
	sort(v.begin(), v.end());     

	// unique : vector 배열에서 중복되지 않는 원소들을 앞에서부터 채워나가는 함수
	// erase : vector에서 특정 원소를 삭제하는 함수
	v.erase(unique(v.begin(), v.end()), v.end());     

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}

	// 출력 : 1 2 3 5 6 8
}
