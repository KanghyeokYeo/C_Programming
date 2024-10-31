#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void abc(int a, int b);
int main() {
	int a = 1;
	int b = 2;

	abc(a, b);

	printf("a = %d, b = %d", a, b);
	return 0;
}
void abc(int a, int b) {
	a = a * 10;
	b = b * 10;
}