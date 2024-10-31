#include<stdio.h>
// 2로 나눈 값 출력하는 함수 생성
void fun1(int x) {
	int result = x / 2;
	printf("%d를 2로 나눈 값은 %d입니다\n", x, result);
}

int main() {
	int a = 10;
	int b = 4;
	int c = 8;

	printf("a의 값은 %d입니다\n", a);
	printf("b의 값은 %d입니다\n", b);
	printf("c의 값은 %d입니다\n", c);

	/* 반복되는 과정
	a = a / 2;
	b = b / 2;
	c = c / 2;

	printf("a를 2로 나눈 값은 %d입니다\n", a);
	printf("b를 2로 나눈 값은 %d입니다\n", b);
	printf("c를 2로 나눈 값은 %d입니다\n", c);
	*/

	// 함수로 처리
	fun2(a);
	fun2(b);
	fun2(b);
	return 0;
}