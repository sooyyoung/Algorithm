#include <stdio.h>

// 2진수를 10진수로 변환
// 2진수의 각 자리가 1이면 비트 연산자를 사용하여 해당 자리에 1을 위치

int main() {
   int decimal = 0;  
   int binary[4] = { 1, 1, 0, 1 };  // 1101 순서대로 저장됨

   int position = 0;
   // 최하위 비트부터 처리하기 위해 배열의 크기 - 1부터 0까지 반복
   for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--){
    if (binary[i] == 1){
        // 2진수의 자릿수가 1이면 그만큼 1을 왼쪽으로 시프트한 뒤 원래 값과 더하여 저장
        decimal += 1 << position;
    }
    // 다음 자리를 차지할 수 있도록 position의 값 증가
    position++;
   }

   printf("%d\n", decimal);
   
   return 0;
}
