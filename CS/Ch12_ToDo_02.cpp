#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int h = 0; h < 19 - 2 * i; h++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}