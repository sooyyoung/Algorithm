#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 랜덤 숫자 뽑기

int main() {
   srand(time(NULL));  // 난수 초기화
   int num = rand() % 3 + 1;  // 1 ~ 3
   
   for (int i = 0; i < 10; i++){
    printf("%d ", rand() % 10);
   }
}
