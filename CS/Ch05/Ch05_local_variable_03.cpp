#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void order();
int main() {
	order(); //number = 0 -> number = 1 -> ������ �����
	order(); //number = 0 -> number = 1 -> ������ ����� �ݺ�
	order(); //number = 0 -> number = 1 -> ������ ����� �ݺ�

	return 0;
}
void order() {
	int number = 0;

	number += 1;
	printf("�մ��� �ֹ���ȣ�� %d�� �Դϴ�\n", number);
}