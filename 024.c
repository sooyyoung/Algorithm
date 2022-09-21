#include <stdio.h>

// 10진수를 2진수로 변환
// 10진수를 0이 될 때까지 2로 계속 나눈 뒤 나머지를 역순으로 읽으면 2진수

int main() {
   int decimal = 13;  // 10진수
   int binary[20] = { 0, };  // 2진수 저장할 배열, 0으로 초기화

   int position = 0;
   while (1){
    binary[position] = decimal % 2;  // 10진수를 2진수로 나눴을 때 나머지를 binary 배열에 저장
    decimal = decimal / 2;  // 2로 나눈 몫 저장

    position++;  // 자릿수 변경

    // decimal이 1이 되면 1을 2로 나눌 수 없으므로 몫은 0 --> 반복 종료
    if (decimal == 0){  
        break;
    }
   }

   // 배열의 요소를 역순으로 출력
   // 인덱스는 0부터 시작하므로 position - 1부터 0까지 감소
   for (int i = position - 1; i >= 0; i--){
    printf("%d", binary[i]);
   }

   printf("\n");
   
   return 0;
}
