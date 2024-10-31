#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int x, int y);
int main() {
	int a = 3;
	int b = 5;

	printf("a = %d, b = %d\n", a, b);
	printf("a + b = %d", sum(a, b));
	return 0;
}
int sum(int x, int y) {
	int result = x + y;
	return result;
}