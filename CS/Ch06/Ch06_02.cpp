#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 1;
	int b;

	b = ++a;
	printf("���� b�� ���� %d\n", b);
	printf("���� a�� ���� %d\n", a);

	a = 1;
	b = a++;
	printf("���� b�� ���� %d\n", b);
	printf("���� a�� ���� %d\n", a);
	return 0;
}