#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int sum=0;
	for (int i = 0; i < 2023; i++) {
		sum += i + 1;
	}

	printf("1부터 2023까지의 합은 %d입니다", sum);
	return 0;
}