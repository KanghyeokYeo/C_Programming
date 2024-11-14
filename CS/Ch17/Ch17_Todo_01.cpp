#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	char a = 'A';
	char* b = &a;
	printf("현재 a의 값은 %c\n", a);

	*b = 'B';
	printf("변경된 a의 값은 %c\n", a);
	printf("b의 값은 %d", b);

	return 0;
}