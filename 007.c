#include <stdio.h>

// 정해진 수 맞추기 게임
// 행운의 숫자는 7로 설정, 7을 입력받을 때까지 계속 반복
// 더 작은 수를 입력받았다면 '더 작은 수', 더 큰 수를 입력받았다면 '더 큰 수'라고 출력

int main() {
	int i, n, key=7;
    
    while (1){
        printf("행운의 숫자를 입력하세요! ");
        scanf("%d", &n);

        if (n == key){
            printf("맞았습니다!\n");
            break;
        } 
        else if(n > key) printf("더 작은 수입니다. 다시 입력하세요.\n\n");	
        else if(n < key) printf("더 큰 수입니다. 다시 입력하세요.\n\n");
    }
    
	return 0;
}