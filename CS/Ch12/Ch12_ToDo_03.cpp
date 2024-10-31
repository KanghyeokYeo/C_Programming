#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 5; i > 0; i--) {
		for (int h = 0; h < 5 - i; h++) {
			printf(" ");
		}
		for (int h = 0; h < 2 * i - 1; h++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}