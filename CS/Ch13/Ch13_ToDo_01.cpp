#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	do {
		printf("����� ���� ���� ���� ����ΰ���?\n");
		printf("1. ��\n");
		printf("2. �ĸ�\n");
		printf("3. �ι���\n");
		printf("4. �Ƿ�ü\n");
		printf("5. ����\n");
		printf("������� ���� ��ȣ�� �����ϼ���\n");
		scanf("%d", &a);
	} while (a < 1 || a>5);
	switch (a)
	{
	case 1: printf("���� �ٷ� ������ ������ ��������");
		break;
	case 2: printf("���� �ٷ� �ĸ��� ������ ��������");
		break;
	case 3: printf("���� �ٷ� �ι��̷� ������ ��������");
		break;
	case 4: printf("���� �ٷ� �Ƿ�ü�� ������ ��������");
		break;
	case 5: printf("���� �ٷ� �������� ������ ��������");
		break;
	}
	return 0;
}