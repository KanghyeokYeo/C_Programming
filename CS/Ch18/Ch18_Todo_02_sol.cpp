#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	int size = sizeof(a) / sizeof(a[0]);

	printf("기존 배열 a의 값 출력");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("배열 각 요소에 10을 더한다\n");
	for (int i = 0; i < size; i++) *(b + i) += 10;

	printf("변경된 배열의 값 출력 - 방법1\n");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("변경된 배열의 값 출력 - 방법2\n");
	for (int i = 0; i < size; i++) printf("%d ", *(b + i));
	printf("\n");

	printf("변경된 배열의 값 출력 - 방법3\n");
	for (int i = 0; i < size; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}