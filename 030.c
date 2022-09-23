#include <stdio.h>

// 전화번호의 하이픈(-) 제거

int main() {
   char phone[15], phone2[15];
   int i, j = 0;
   printf("하이픈(-)을 포함한 전화번호를 입력해주세요! : ");
   scanf("%s", phone);

   for (i = 0; i < 15; i++){
    if(phone[i] != '-'){
        phone2[j] = phone[i];
        j++;
    }
   }
   printf("%s\n", phone2);
}
