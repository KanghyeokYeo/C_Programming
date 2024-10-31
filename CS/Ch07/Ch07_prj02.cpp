#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	// double 변수 선언하여 평균을 대입해도 됨
	printf("국어 점수 :");
	scanf("%d", &a);
	printf("영어 점수 :");
	scanf("%d", &b);
	printf("수학 점수 :");
	scanf("%d", &c);
	printf("평균 : %.2f", (a + b + c) / 3.0);
	return 0;
}