#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	// double ���� �����Ͽ� ����� �����ص� ��
	printf("���� ���� :");
	scanf("%d", &a);
	printf("���� ���� :");
	scanf("%d", &b);
	printf("���� ���� :");
	scanf("%d", &c);
	printf("��� : %.2f", (a + b + c) / 3.0);
	return 0;
}