#define _CRT_SECURE_NO_WARNINGS //scanf 경고무시
#include<stdio.h>
int main() {
	int a;
	float b;

	scanf("%d%f", &a, &b); // 다중입력
	printf("입력된 값 : %d, %f", a, b);

	return 0;
}