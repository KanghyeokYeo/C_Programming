#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int x);

int main() {
	int input;
	printf("���� �Է��ϼ���\n");
	scanf("%d", &input);

	/*int sum = 0;
	for (int i = 0; i < input; i++) {
		sum += i + 1;
	}

	printf("1���� %d������ ���� %d�Դϴ�.", input, sum);*/

	sum(input);

	return 0;
}

int sum(int x) {
	int result = 0;
	for (int i = 0; i < x; i++) {
		result += i + 1;
	}

	printf("1���� %d������ ���� %d�Դϴ�.", x, result);
}