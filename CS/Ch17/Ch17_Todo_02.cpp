#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
void twoTime(int* x);
int main() {
	int input;
	printf("수를 입력하세요");
	scanf("%d", &input);

	twoTime(&input);
	printf("입력한 수의 2배는 %d입니다", input);
	return 0;
}
void twoTime(int* x) {
	/*int result = *x * 2;*/
	*x *= 2; // 더 간단히 표현 가능
}