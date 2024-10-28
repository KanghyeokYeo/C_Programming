#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int x, int y);

int main() {
	int a, b;
	printf("첫 번째 정수를 입력하세요\n");
	scanf("%d", &a);
	printf("두 번째 정수를 입력하세요\n");
	scanf("%d", &b);

	printf("큰 수는 %d입니다.", max(a, b));
	
	return 0;
}
int max(int x, int y) {
	if (x > y) return x;
	else return y;
}