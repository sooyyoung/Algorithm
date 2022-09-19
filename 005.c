#include <stdio.h>

// 약수 구하기

int main() {
	int n;
	scanf("%d", &n);

    printf("%d의 약수는 ", n);
    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }

	return 0;
}