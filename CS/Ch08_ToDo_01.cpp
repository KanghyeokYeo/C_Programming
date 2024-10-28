#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("정수를 입력하세요");
	scanf("%d", &a);
	if (a >= 10) {
		printf("%d를 10배 한 결과는 %d입니다.\n", a, a * 10);
	}
	printf("프로그램을 마칩니다");
	return 0;
}