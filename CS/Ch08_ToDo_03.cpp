#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float a;
	printf("�Ǽ��� �Է��ϼ���");
	scanf("%f", &a);
	if (a < 0) {
		a = -a;
	}

	printf("����� %.1f\n", a);
	return 0;
}