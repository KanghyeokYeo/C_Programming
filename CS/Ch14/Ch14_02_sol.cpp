#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int input;
	printf("���� �Է��ϼ���");
	scanf("%d", &input);
	int i = 1;
	while (i <= 9) {
		printf("%d * %d = %d\n", input, i, input * i);
		i++;
	}
	return 0;
}