#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5];
	int* b = a;
	int size = sizeof(a) / sizeof(a[0]);
	int sum = 0;
	for (int i = 0; i < size; i++) {
		printf("%d��° �л��� ���������� �Է��ϼ���",i+1);
		scanf("%d", b+i); // &a[i]�� ����
	}
	
	for (int i = 0; i < size; i++) sum += *(b + i);
	int avg = sum / size;
	printf("%d�� �л��� ����� %d�Դϴ�", size, avg);
	return 0;
}