#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	int b;
	while (1) { // ���ѹݺ�
		printf("���α׷��� ���߷��� ���� 0�� �Է��ϼ���\n");
		printf("ù ��° ���� �Է��ϼ���");
		scanf("%d", &a);
		if (a == 0)break;

		printf("�� ��° ���� �Է��ϼ���");
		scanf("%d", &b);
		if (b == 0)break;
		
		printf("�� �� %d, %d�� ���� %d�Դϴ�.\n\n", a, b, a * b);
	}
	printf("���α׷��� �����մϴ�.");
	return 0;
}