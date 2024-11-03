#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h> // 난수 생성 헤더파일

int main() {
	int a;
	int b;
	int c;

	int count = 0;
	do {
		a = rand() % (6) + 1;
		b = rand() % (6) + 1;
		c = rand() % (6) + 1;
		count++;
	} while (a != b || b != c || c != a);
	
	printf("주사위는 총 %d번 던졌습니다.\n", count);
	printf("주사위가 가리키는 수는 %d입니다.", a);
	return 0;
}