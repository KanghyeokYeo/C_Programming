#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int a, b, c;
	int flag = 0; // �ݺ� Ȯ�� ����
	srand((unsigned int)time(NULL)); // ��ȭ�ϴ� �ð����� �����ϴ� �Լ�

	int count = 0;
	do {
		count++;
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		c = rand() % 6 + 1;
		
		if (a == b && b == c) flag = 1;
	} while (flag == 0);

	printf("�ֻ����� �� %d�� �������ϴ�.\n", count);
	printf("�ֻ����� ����Ű�� ���� %d�Դϴ�.", a);
	return 0;
}