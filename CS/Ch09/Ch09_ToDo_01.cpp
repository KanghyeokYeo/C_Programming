#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int x, int y);

int main() {
	int a, b;
	printf("ù ��° ������ �Է��ϼ���\n");
	scanf("%d", &a);
	printf("�� ��° ������ �Է��ϼ���\n");
	scanf("%d", &b);

	printf("ū ���� %d�Դϴ�.", max(a, b));
	
	return 0;
}
int max(int x, int y) {
	if (x > y) return x;
	else return y;
}