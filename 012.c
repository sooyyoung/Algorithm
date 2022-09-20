#include <stdio.h>

// 1~n까지 숫자의 합

int main() {
   int n;
   scanf("%d", &n);

   int sum = 0;
   for (int i = 1; i <= n; i++){
    sum += i;
   }
   
   printf("1~%d까지 숫자의 합 : %d\n", n, sum);
}