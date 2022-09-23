#include <stdio.h>

// 저장된 비밀번호와 비교하기
// 비밀번호 4자리를 입력, 이미 저장된 비밀번호와 비교

int main() {
   char input[4], pw[4] = "1234";
   int cnt = 0;

   printf("비밀번호 4자리를 입력해주세요! ");
   scanf("%s", input);

   for (int i = 0; i < 4; i++){
    if(input[i] != pw[i]){
        cnt++;
    }
   }
   
   if(cnt == 0){
        printf("비밀번호 일치!\n");
   }
   else {
        printf("비밀번호 미일치!\n");
   }
}
