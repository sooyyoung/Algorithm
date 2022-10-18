#include <iostream>
using namespace std;

// 소숫점 자리수 다루기

int main() {
    cout << fixed;
    cout.precision(2);   // 소수점 개수를 2개로 고정. 3째자리에서 반올림

    cout << 2.123124215 << '\n';   // 2.12
    cout << 2.125124215 << '\n';   // 2.13
}
