#include <stdio.h>

// 중복된 알파벳 찾기

int main() {
   char input[20];
   int size = sizeof(input) / sizeof(char);
   int check[128] = {};

   printf("영어 단어를 입력해주세요! ");
   scanf("%s", input);
   
   int idx;
   for (int i = 0; i < size; i++){
    idx = input[i];
    check[idx]++;
   }
   
   printf("중복된 알파벳 : ");
   for (int i = 0; i < 128; i++){
    if(check[i] >= 2){
        printf("%c", i);
    }
   }
}
