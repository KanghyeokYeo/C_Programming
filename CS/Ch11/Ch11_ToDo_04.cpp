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

	printf("1���� 2023������ ¦���� ������ ���� %d�Դϴ�", sum);

	return 0;
}