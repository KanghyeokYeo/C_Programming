#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	int aSize = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < aSize; i++) printf("a[%d]�� �ּ� : %d\n", i, &a[i]);
	printf("�迭���� �̸� a�� �� : %d", a); // a�� &a[0]�� ��ġ�Ѵ�

	// �����͸� ����� �迭�� �� ����
	printf("a[0]�� ����� ���� %d\n", a[0]);
	*b = 10;
	printf("a[0]�� ����� ���� %d\n", a[0]);

	// �����Ϳ��� +1�̶�
	b = b + 1; //b = &a[0] => &a[1]
	printf("a[1]�� �ּ� : %d\n", &a[1]);
	printf("b�� �� : %d\n", b);

	return 0;
}