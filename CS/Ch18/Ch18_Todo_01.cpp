#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[1] = { 1 };
	int* b = &a[0];
	// int*b = a; �����ϴ�
	
	printf("a[0]�� �ּҰ��� %d\n",&a[0]);
	printf("a[0]�� �ּҰ��� %d\n",b);
	printf("a[0]�� �ּҰ��� %d\n", a);

	printf("a[0]�� ����� ���� %d\n",*b);
	printf("a[0]�� ����� ���� %d\n",a[0]);
	return 0;
}