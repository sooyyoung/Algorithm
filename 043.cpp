#include <iostream>

using namespace std;

// 숫자 자릿수 더하기

// 123 -> 6
// 987 -> 24


int main(int n) {
	int sum = 0;

    while (n > 0) {     // 모든 자릿수를 다 구해 더할 때까지 while문 실행
        sum += n % 10;     // 10으로 나눠서 나머지를 sum에 입력
        n = n / 10;     // 맨 뒤에 자리수를 없앤다
    }

    return sum;
}
