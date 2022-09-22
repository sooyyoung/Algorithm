#include <stdio.h>

// 짱구, 철수, 유리의 점수

struct student {
    char name[6];
    int kor, math, sum, total;
};

int main() {
   struct student s[3] = {{"짱구", 90, 85}, {"철수", 88, 91}, {"유리", 80, 75}};
   struct student *p;

   p = &s[0];
   // printf("%s", p);  // 짱구

   (p + 1)->sum = (p + 1)->kor + (p + 2)->math;  // 88 + 75 = 163 
   (p + 1)->total = (p + 1)->sum + p->kor + p->math;  // 163 + 90 + 85 = 338

   printf("%d\n", (p + 1)->sum + (p + 1)->total);  // 163 + 338 = 501
}
