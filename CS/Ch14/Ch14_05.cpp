#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	int b;
	do {
		printf("프로그램을 멈추려면 숫자 0을 입력하세요\n");
		printf("첫 번째 수를 입력하세요");
		scanf("%d", &a);
		printf("두 번째 수를 입력하세요");
		scanf("%d", &b);
		if (a != 0 && b != 0) printf("두 수 %d, %d의 곱은 %d입니다.", a, b, a * b);
		else printf("프로그램을 종료합니다."); break;
	} while (a != 0 && b!=0);
	return 0;
}