#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
void twoTime(int* x);
int main() {
	int input;
	printf("���� �Է��ϼ���");
	scanf("%d", &input);

	twoTime(&input);
	printf("�Է��� ���� 2��� %d�Դϴ�", input);
	return 0;
}
void twoTime(int* x) {
	/*int result = *x * 2;*/
	*x *= 2; // �� ������ ǥ�� ����
}