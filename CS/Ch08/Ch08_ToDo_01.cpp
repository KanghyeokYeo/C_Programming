#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("������ �Է��ϼ���");
	scanf("%d", &a);
	if (a >= 10) {
		printf("%d�� 10�� �� ����� %d�Դϴ�.\n", a, a * 10);
	}
	printf("���α׷��� ��Ĩ�ϴ�");
	return 0;
}