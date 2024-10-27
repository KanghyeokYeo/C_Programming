#include<stdio.h>

float fun2(int x, int y);

int main() {
	int a = 10, b = 4;
	printf("a = %d, b = %dÀÏ ¶§ fun2(a, b) = %.1f", a, b, fun2(a, b));
	return 0;
}

float fun2(int x, int y) {
	return x + y + 3.1;
}