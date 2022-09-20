#include <stdio.h>

// 일의 자릿수가 3, 6, 9인 경우 * 찍기
// 1 2 * 4 5 * 7 8 * 10 11 12 * 14 15 ...

int main() {
   int n;
   scanf("%d", &n);

   for (int i = 1; i <= n; i++){
    int j = i % 10;
    if(j == 3 || j == 6 || j == 9){
        printf("* ");
    }
    else {
        printf("%d ", i);
    }
   }
   
   printf("\n");
}