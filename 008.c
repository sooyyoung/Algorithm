#include <stdio.h>

// 최댓값 최솟값
// 5개의 숫자를 입력받고 가장 큰 수와 가장 작은 수를 출력

int main() {
	int i, num[5], max=0, min=0;
    
    for(i = 0; i < 5; i++){
        printf("숫자를 입력하세요: ");
        scanf("%d", &num[i]);
    }

    max=num[0];
	min=num[0];

    for(i = 0; i < 5; i++){
        if(max <= num[i]) {
            max = num[i];
        }		
        if(min >= num[i]) {
            min = num[i];
        }
    }

    printf("최댓값: %d, 최솟값: %d\n", max, min);
    
	return 0;
}