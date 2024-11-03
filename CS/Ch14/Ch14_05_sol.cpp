#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	int b;
	while (1) { // 무한반복
		printf("프로그램을 멈추려면 숫자 0을 입력하세요\n");
		printf("첫 번째 수를 입력하세요");
		scanf("%d", &a);
		if (a == 0)break;

		printf("두 번째 수를 입력하세요");
		scanf("%d", &b);
		if (b == 0)break;
		
		printf("두 수 %d, %d의 곱은 %d입니다.\n\n", a, b, a * b);
	}
	printf("프로그램을 종료합니다.");
	return 0;
}