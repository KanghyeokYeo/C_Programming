#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int char_to_ASCII(char a);
int main() {
	char x;

	printf("���ڸ� �Է��ϼ���\n");
	scanf("%c", &x);

	printf("����� �Է��� ������ �ƽ�Ű�ڵ�� %d�Դϴ�", char_to_ASCII(ch));

	return 0;
}
int char_to_ASCII(char a) {
	return a;
}