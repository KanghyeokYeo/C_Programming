#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	int b;
	do {
		printf("���α׷��� ���߷��� ���� 0�� �Է��ϼ���\n");
		printf("ù ��° ���� �Է��ϼ���");
		scanf("%d", &a);
		printf("�� ��° ���� �Է��ϼ���");
		scanf("%d", &b);
		if (a != 0 && b != 0) printf("�� �� %d, %d�� ���� %d�Դϴ�.", a, b, a * b);
		else printf("���α׷��� �����մϴ�."); break;
	} while (a != 0 && b!=0);
	return 0;
}