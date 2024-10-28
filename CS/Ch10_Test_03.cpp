#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Calculator(int x, int y);

int main() {
	int a, b;
	printf("첫 번째 수를 입력하세요\n");
	scanf("%d", &a);

	printf("두 번째 수를 입력하세요\n");
	scanf("%d", &b);
	
	printf("더 큰 절대값을 가지는 수는 %d입니다", Calculator(a, b));
	return 0;
}
int Calculator(int x, int y) {
	int _x = x;
	int _y = y;
	if (x < 0) x = -x;
	if (y < 0) y = -y;
	if (x < y) return _y;
	else return _x;
}