#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 0; i < 10; i++) {
		if (i >= 6) break;

		if (i % 2 == 0) printf("%d\n", i);
		else continue;
	}
	return 0;
}