#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("������ �Է��ϼ���");
	scanf("%d", &a);
	// a % 2 == 0 �� !(a%2) �� ���� ���ǹ��̴�
	if (a%2==0) {
		printf("¦���Դϴ�.");
	}
	else
	{
		printf("Ȧ���Դϴ�.");
	}
	return 0;
}