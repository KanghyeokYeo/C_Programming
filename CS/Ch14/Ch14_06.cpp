#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h> // ���� ���� �������

int main() {
	int a;
	int b;
	int c;

	int count = 0;
	do {
		a = rand() % (6) + 1;
		b = rand() % (6) + 1;
		c = rand() % (6) + 1;
		count++;
	} while (a != b || b != c || c != a);
	
	printf("�ֻ����� �� %d�� �������ϴ�.\n", count);
	printf("�ֻ����� ����Ű�� ���� %d�Դϴ�.", a);
	return 0;
}