#include <stdio.h>
#include <string.h>

// 입력한 단어의 길이

int main() {
    char str[50];

    printf("문자열을 입력하세요. : ");
    scanf("%s", str);   

    printf("입력된 단어는 %s이고 단어의 길이는 %d\n", str, strlen(str));

	return 0;
}