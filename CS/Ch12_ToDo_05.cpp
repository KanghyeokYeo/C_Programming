#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int sum = 0;
	int i = 1;
	while (i <= 2023) {
		sum += i;
		i++;
	}
	printf("1���� 2023������ ���� %d�Դϴ�", sum);
	
	return 0;
}