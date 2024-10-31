#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 1;
	int b;

	b = ++a;
	printf("변수 b의 값은 %d\n", b);
	printf("변수 a의 값은 %d\n", a);

	a = 1;
	b = a++;
	printf("변수 b의 값은 %d\n", b);
	printf("변수 a의 값은 %d\n", a);
	return 0;
}