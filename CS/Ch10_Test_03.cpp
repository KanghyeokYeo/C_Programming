#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Calculator(int x, int y);

int main() {
	int a, b;
	printf("ù ��° ���� �Է��ϼ���\n");
	scanf("%d", &a);

	printf("�� ��° ���� �Է��ϼ���\n");
	scanf("%d", &b);
	
	printf("�� ū ���밪�� ������ ���� %d�Դϴ�", Calculator(a, b));
	return 0;
}
int Calculator(int x, int y) {
	int _x = x;
	int _y = y;
	if (x < 0) x = -x;
	if (y < 0) y = -y;
	if (x < y) return _y;
	else return _x;
}