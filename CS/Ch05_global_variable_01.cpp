#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int number; // ��������
void order();
int main() {
	order(); // number = 1
	order(); // number = 2
	number = number + 1; // number = 3
	order(); // number = 4

	return 0;
}
void order() {
	number += 1;
	printf("�մ��� �ֹ���ȣ�� %d�� �Դϴ�\n", number);
}