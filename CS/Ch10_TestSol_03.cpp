#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ab(int x);
int Max(int x, int y);

int main() {
	int a, b;
	printf("첫 번째 수를 입력하세요\n");
	scanf("%d", &a);

	printf("두 번째 수를 입력하세요\n");
	scanf("%d", &b);

	printf("더 큰 절대값을 가지는 수는 %d입니다", Max(a, b));
	return 0;
}
// 절댓값 함수
int ab(int x) {
	if (x < 0) x = -x;
	return x;
}
// 절댓값 비교 함수
int Max(int x, int y) {
	if (ab(x) < ab(y)) return y;
	else return x;
}