#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("정수를 입력하세요");
	scanf("%d", &a);
	// a % 2 == 0 와 !(a%2) 는 같은 조건문이다
	if (a%2==0) {
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수입니다.");
	}
	return 0;
}