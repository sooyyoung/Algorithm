#include <iostream>

using namespace std;

// 직사각형 별 찍기

// 입력: 5 3
/* 출력:
*****
*****
*****
*/


int main() {
    int a, b, i, j;

    cin >> a >> b;

    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
