#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	char a = 'A';
	char* b = &a;
	printf("���� a�� ���� %c\n", a);

	*b = 'B';
	printf("����� a�� ���� %c\n", a);
	printf("b�� ���� %d", b);

	return 0;
}