#include <stdio.h>

// 값 두 배로 만들기

int main() {
   int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

   for (int i = 0; i < sizeof(arr) / sizeof(int); i++){
    arr[i] *= 2;
   }

   for (int i = 0; i < sizeof(arr) / sizeof(int); i++){
    printf("%d\n", arr[i]);
   }

   return 0;
}
