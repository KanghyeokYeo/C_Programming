#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	int size = sizeof(a) / sizeof(a[0]);

	printf("���� �迭 a�� �� ���");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("�迭 �� ��ҿ� 10�� ���Ѵ�\n");
	for (int i = 0; i < size; i++) *(b + i) += 10;

	printf("����� �迭�� �� ��� - ���1\n");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("����� �迭�� �� ��� - ���2\n");
	for (int i = 0; i < size; i++) printf("%d ", *(b + i));
	printf("\n");

	printf("����� �迭�� �� ��� - ���3\n");
	for (int i = 0; i < size; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}