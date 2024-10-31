#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = -4; i <= 4; i++) {
		if (i <= 0) {
			for (int j = 0; j < -i; j++) printf(" ");
			for (int h = 0; h < 9 + 2 * i; h++) printf("*");
			printf("\n");
		}
		else
		{
			for (int j = 0; j < i; j++) printf(" ");
			for (int h = 0; h < 9 - 2 * i; h++) printf("*");
			printf("\n");
		}
	}
	return 0;
}