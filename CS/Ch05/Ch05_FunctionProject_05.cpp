#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(float h);
int main() {
	printf("cm�� m�� ��ȯ�ص帱�Կ�.\n");
	printf("����� Ű�� cm������ �Է��ϼ���\n");
	float h;
	scanf("%f", &h);
	fun(h);
	return 0;
}
void fun(float h) {
	float result = h / 100;
	printf("��� : %.2fm", result);
}