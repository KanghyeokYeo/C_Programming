#include<stdio.h>
// 2�� ���� �� ����ϴ� �Լ� ����
void fun1(int x) {
	int result = x / 2;
	printf("%d�� 2�� ���� ���� %d�Դϴ�\n", x, result);
}

int main() {
	int a = 10;
	int b = 4;
	int c = 8;

	printf("a�� ���� %d�Դϴ�\n", a);
	printf("b�� ���� %d�Դϴ�\n", b);
	printf("c�� ���� %d�Դϴ�\n", c);

	/* �ݺ��Ǵ� ����
	a = a / 2;
	b = b / 2;
	c = c / 2;

	printf("a�� 2�� ���� ���� %d�Դϴ�\n", a);
	printf("b�� 2�� ���� ���� %d�Դϴ�\n", b);
	printf("c�� 2�� ���� ���� %d�Դϴ�\n", c);
	*/

	// �Լ��� ó��
	fun2(a);
	fun2(b);
	fun2(b);
	return 0;
}