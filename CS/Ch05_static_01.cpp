#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void order();
int main() {
	order(); // number = 1
	order(); // number = 2
	order(); // number = 3

	return 0;
}
void order() {
	static int number = 0; //�������� ����

	number += 1;
	printf("�մ��� �ֹ���ȣ�� %d�� �Դϴ�\n", number);
}