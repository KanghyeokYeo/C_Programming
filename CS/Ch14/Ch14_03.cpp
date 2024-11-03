#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int input;
	printf("몇 단을 제외할까요?");
	scanf("%d", &input);

	for (int i = 2; i <= 9; i++) {
		if (i == input) continue;
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}