#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 9; j > i; j--) {
			printf(" ");
		}
		for (int h = 0; h < 2*i + 1; h++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}