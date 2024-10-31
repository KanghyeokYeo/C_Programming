#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= 3 - i; j++) {
			printf(" ");
		}
		for (int h = 0; h < i; h++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}