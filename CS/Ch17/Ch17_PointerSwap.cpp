#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 
void swap1(int x, int y);
void swap2(int* x, int* y);
int main() {
	int a = 3;
	int b = 5;
	// Call by Value : �Լ� ȣ�� �� ���� x, y�� �����Ͽ� �ٲ� �� �Լ� ����Ǹ� �����
	printf("a : %d, b : %d\n", a, b);
	swap1(a, b);
	printf("a : %d, b : %d\n", a, b);
	// ��������� a, b �� �ٲ�

	// �����͸� �̿��Ͽ� a, b �ּҰ��� ���������� �ٲٱ�
	swap2(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
void swap1(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
void swap2(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}