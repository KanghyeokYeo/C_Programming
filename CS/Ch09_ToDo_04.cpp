#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("����� ���������� �����ΰ���?\n");
	scanf("%d", &a);

	switch (a/10)
	{
	case 10: case 9:
		printf("����� A�����Դϴ�.");
		break;
	case 8:
		printf("����� B�����Դϴ�.");
		break;
	case 7:
		printf("����� C�����Դϴ�.");
		break;
	default:
		printf("����� F�����Դϴ�.");
		break;
	}
	
	return 0;
}