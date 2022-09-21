#include <stdio.h>

// 점수 평균 구하기

int main() {
   float scores[3] = {67.5, 97.0, 88.5};
   float sum = 0;
   float average;

   for (int i = 0; i < sizeof(scores) / sizeof(float); i++){
    sum += scores[i];
   }

   average = sum / (sizeof(scores) / sizeof(float));

   printf("%f\n", average);
   
   return 0;
}
