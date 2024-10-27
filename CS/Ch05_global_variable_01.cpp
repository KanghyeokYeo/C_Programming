#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int number; // 전역변수
void order();
int main() {
	order(); // number = 1
	order(); // number = 2
	number = number + 1; // number = 3
	order(); // number = 4

	return 0;
}
void order() {
	number += 1;
	printf("손님의 주문번호는 %d번 입니다\n", number);
}