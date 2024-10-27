#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("전체 좌석은 100석입니다.\n");
	printf("입장객 수를 입력하세요");
	scanf("%d", &a);
	printf("입장률 : %.1f %%", a*100.0/100);
	return 0;
}