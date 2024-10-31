#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int x);

int main() {
	int sum = 0;

	for (int i = 1; i <= 2023; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}

	printf("1부터 2023까지의 짝수인 정수의 합은 %d입니다", sum);

	return 0;
}