#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float a;
	printf("실수를 입력하세요");
	scanf("%f", &a);
	if (a < 0) {
		a = -a;
	}

	printf("결과는 %.1f\n", a);
	return 0;
}