#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("정수를 입력하세요");
	scanf("%d", &a);
	printf("결과 : %d", a % 2 == 0);
	return 0;
}
/* a % 2 ? 0 : 1;
* a가 짝수면 조건문 결과값이 0
* 0은 거짓이므로 1을 반환함
* a가 홀수면 조건문 결과값이 1
* 1은 참이므로 0을 반환함
*/