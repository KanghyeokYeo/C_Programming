#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	printf("�� ���� ���� �ٸ� ������ �Է��ϼ���\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("�Էµ� �� �� �� ū ���� %d�Դϴ�", a > b ? a : b);
	return 0;
}