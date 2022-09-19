#include <stdio.h>

// 사칙연산
// 입력 : 1 ≤ A, B ≤ 10,000
// 출력 : A+B, A-B, A*B, A/B(몫), A%B(나머지)

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n%d\n%d\n%d\n%d\n", A + B, A - B, A * B, A / B, A % B);
	return 0;
}