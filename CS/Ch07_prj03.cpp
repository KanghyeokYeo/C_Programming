#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("������ �Է��ϼ���");
	scanf("%d", &a);
	printf("��� : %d", a % 2 == 0);
	return 0;
}
/* a % 2 ? 0 : 1;
* a�� ¦���� ���ǹ� ������� 0
* 0�� �����̹Ƿ� 1�� ��ȯ��
* a�� Ȧ���� ���ǹ� ������� 1
* 1�� ���̹Ƿ� 0�� ��ȯ��
*/