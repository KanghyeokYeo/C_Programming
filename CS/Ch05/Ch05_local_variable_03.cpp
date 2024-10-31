#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void order();
int main() {
	order(); //number = 0 -> number = 1 -> 데이터 사라짐
	order(); //number = 0 -> number = 1 -> 데이터 사라짐 반복
	order(); //number = 0 -> number = 1 -> 데이터 사라짐 반복

	return 0;
}
void order() {
	int number = 0;

	number += 1;
	printf("손님의 주문번호는 %d번 입니다\n", number);
}