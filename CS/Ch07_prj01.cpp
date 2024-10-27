#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float a = 4.0f;
	float b = 1.2f;
	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
	printf("%.1f / %.1f = %.1f\n", a, b, a / b);
	return 0;
}