#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int a);

int main() {
	int input;
	printf("���� �Է��ϼ���\n");
	scanf("%d", &input);


	printf("1���� %d������ ���� %d�Դϴ�.", input, sum(input));
	return 0;
}

int sum(int a) {
	int result = 0;
	int i = 1;
	while (i <= a) {
		result += i;
		i++;
	}
	return result;
}