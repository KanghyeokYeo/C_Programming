#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 
void swap1(int x, int y);
void swap2(int* x, int* y);
int main() {
	int a = 3;
	int b = 5;
	// Call by Value : 함수 호출 시 값을 x, y에 참조하여 바꾼 뒤 함수 종료되면 사라짐
	printf("a : %d, b : %d\n", a, b);
	swap1(a, b);
	printf("a : %d, b : %d\n", a, b);
	// 결과적으로 a, b 안 바뀜

	// 포인터를 이용하여 a, b 주소값의 역참조값을 바꾸기
	swap2(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
void swap1(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
void swap2(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}