#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int x, int y);

// ���� �ڵ�
//int main() {
//	int a;
//	printf("���� �Է��ϼ���\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf("%d���� 31�ϱ��� �ֽ��ϴ�", a);
//		break;
//	case 2:
//		printf("%d���� 28�ϱ��� �ֽ��ϴ�", a);
//		break;
//	case 4:	case 6:	case 9:	case 11:
//		printf("%d���� 30�ϱ��� �ֽ��ϴ�", a);
//		break;
//	}
//
//	return 0;
//}

int main() {
	int a ,b;
	printf("���� �Է��ϼ���\n");
	scanf("%d", &a);
	switch(a)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		b = 31;
		break;
	case 2:
		b = 28;
		break;
	default:
		b = 30;
		break;
	}
	printf("%d���� %d�ϱ��� �ֽ��ϴ�",a,b);
	return 0;
}