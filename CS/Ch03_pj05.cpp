#include<stdio.h>
int main() {
	int a = 7, b = 5;
	printf("a�� ���� %d �̴�.\n", a);
	printf("b�� ���� %d �̴�.\n", b);
	printf("a�� b�� ���� ���� %d �̴�.\n", a + b);
	printf("a�� b�� ���� ���� �ٲٰڽ��ϴ�.\n");
	int temp = a;
	a = b;
	b = temp;
	printf("a�� ���� %d �̴�.\n", a);
	printf("b�� ���� %d �̴�.\n", b);
	return 0;
}