#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	// �ּҿ����� &
	// ������ ���� *
	int a = 3;
	int* b = &a; // b�� a���� �ּҰ� ����

	printf("a�� �� : %d\n", a);
	printf("a�� �ּҰ�(&a) : %d\n", &a);
	printf("a�� �ּҰ�(b) : %d\n", b); // b�� a�� �ּҰ�
	printf("b�� �ּҰ��� ���� ������(*b) : %d\n", *b); // *b�� �ּҰ��� ���� ������
	printf("\n");

	a = 5; // a�� ���� �����Ѵ� �ϴ��� a�� �ּҰ��� ���α׷��� ����Ǳ� �������� ������ �ʴ´�
	printf("a�� �� : %d\n", a);
	printf("a�� �ּҰ�(&a) : %d\n", &a);
	printf("a�� �ּҰ�(b) : %d\n", b);
	printf("b�� �ּҰ��� ���� ������(*b) : %d\n", *b);
	printf("\n");

	// ������ ���� ũ�� : �׻� ����(32��Ʈ : 4����Ʈ), (64��Ʈ : 8����Ʈ)
	float fl;
	double dl;
	float* flPtr = &fl;
	double* dlPtr = &dl;

	printf("float�� ũ�� %d\n", sizeof(fl));
	printf("double�� ũ�� %d\n", sizeof(dl));
	printf("float������ ũ�� %d\n", sizeof(flPtr));
	printf("double������ ũ�� %d\n", sizeof(dlPtr));


	return 0;
}