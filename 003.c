#include <stdio.h>

// N 찍기
// 입력 : 자연수 N
// 출력 : 1부터 N까지 한 줄에 하나씩 출력

int main() {
	int n;
	scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d\n", i + 1);
    }
	
	return 0;
}