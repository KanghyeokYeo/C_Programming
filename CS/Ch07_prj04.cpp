#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("��ü �¼��� 100���Դϴ�.\n");
	printf("���尴 ���� �Է��ϼ���");
	scanf("%d", &a);
	printf("����� : %.1f %%", a*100.0/100);
	return 0;
}