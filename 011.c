#include <stdio.h>

// 체질량 지수 구하기
// 입력 : 체중(kg, 실수)과 키(m, 실수)

int main() {
   float weight;
   float height;

   printf("체중 입력 (kg) : ");
   scanf("%f", &weight);

   printf("키 입력 (m) : ");
   scanf("%f", &height);

   float bmi = weight / (height * height);

   printf("BMI : %f\n", bmi);

   return 0;
}