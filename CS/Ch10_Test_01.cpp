#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	printf("AŸ�� ���������� �����ΰ���?\n");
	scanf("%d", &a);

	printf("BŸ�� ���������� �����ΰ���?\n");
	scanf("%d", &b);
	
	if (a >= 80 && b >= 70) {
		printf("PASS");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}