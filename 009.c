#include <stdio.h>

// 문자열의 개수

int main() {
	char str[] = "hello world";
	int size = 0;
    
    size = sizeof(str) / sizeof(str[0]);
	
	printf("문자열 str의 개수는 %d개 입니다.\n", size);
    
	return 0;
}