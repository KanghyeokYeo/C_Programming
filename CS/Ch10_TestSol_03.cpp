#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ab(int x);
int Max(int x, int y);

int main() {
	int a, b;
	printf("ù ��° ���� �Է��ϼ���\n");
	scanf("%d", &a);

	printf("�� ��° ���� �Է��ϼ���\n");
	scanf("%d", &b);

	printf("�� ū ���밪�� ������ ���� %d�Դϴ�", Max(a, b));
	return 0;
}
// ���� �Լ�
int ab(int x) {
	if (x < 0) x = -x;
	return x;
}
// ���� �� �Լ�
int Max(int x, int y) {
	if (ab(x) < ab(y)) return y;
	else return x;
}