#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("����� ���������� �����ΰ���?\n");
	scanf("%d", &a);
	if (a >= 90 ) {
		printf("����� A�����Դϴ�!\n");
	}
	else if (a >= 80 ) {
		printf("����� B�����Դϴ�!\n");
	}
	else if (a >= 70 )
	{
		printf("����� C�����Դϴ�!\n");
	}
	else
	{
		printf("����� F�����Դϴ�!\n");
	}
	return 0;
}