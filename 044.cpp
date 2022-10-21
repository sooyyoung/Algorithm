#include <iostream>
#include <algorithm>

using namespace std;

// 최댓값, 최솟값

int main() {
	int a[10] = { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };

	cout << *max_element(a, a + 10) << endl;
	cout << *min_element(a, a + 10) << endl;
}
