#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("������ �Է��ϼ���");
	scanf("%d", &a);
	if (a > 0) {
		printf("�Էµ� ���� ����Դϴ�.\n");
	}
	else if (a < 0) {
		printf("�Էµ� ���� �����Դϴ�.\n");
	}
	else
	{
		printf("�Էµ� ���� 0�Դϴ�.\n");
	}
	return 0;
}