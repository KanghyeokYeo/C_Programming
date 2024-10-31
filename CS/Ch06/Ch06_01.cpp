#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	printf("변수 a의 값을 입력하세요\n");
	scanf("%d", &a);
	b = a;
	c = a;
	printf("변수 a의 값은 %d입니다\n", a);
	printf("변수 b의 값은 %d입니다\n", b);
	printf("변수 c의 값은 %d입니다\n", c);

	return 0;
}