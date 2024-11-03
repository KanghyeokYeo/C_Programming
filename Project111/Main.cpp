#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int a, b, c;
	int flag = 0; // 반복 확인 조건
	srand((unsigned int)time(NULL)); // 변화하는 시간값을 전달하는 함수

	int count = 0;
	do {
		count++;
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		c = rand() % 6 + 1;
		
		if (a == b && b == c) flag = 1;
	} while (flag == 0);

	printf("주사위는 총 %d번 던졌습니다.\n", count);
	printf("주사위가 가리키는 수는 %d입니다.", a);
	return 0;
}