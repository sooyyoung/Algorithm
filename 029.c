#include <stdio.h>

// 단어의 첫문자를 대문자로 바꾸기

int main() {
   char str[10];
   scanf("%s", str);
   str[0] = str[0] - 'a' + 'A';
   printf("%s\n", str);
}
