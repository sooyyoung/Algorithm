#include <stdio.h>

// 짝수의 개수

int main() {
   int n;
   int arr[100];

   printf("입력할 숫자의 개수 : ");
   scanf("%d", &n);

   for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
   }
   
   int cnt = 0;
   for (int i = 0; i < n; i++){
    if (arr[i] % 2 == 0){
        cnt++;
    }
   }
   
   printf("짝수의 개수 : %d\n", cnt);
}