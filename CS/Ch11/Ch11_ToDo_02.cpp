#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	for (int i = 4; i <= 100; i += 4) {
		printf("%d\n", i);
	}

	for (int i = 1; i <= 100; i++) {
		if (!(i % 4)) { // i % 4 == 0
			printf("%d\n",i);
		}
	}
	return 0;
}