#define _CRT_SECURE_NO_WARNINGS //scanf �����
#include<stdio.h>
int main() {
	int a;
	printf("�����Է� : ");
	scanf("%d", &a);
	
	float b;
	printf("�Ǽ��Է� : ");
	scanf("%f", &b);

	char c;
	printf("�����Է� : ");
	scanf(" %c", &c); //���۷� ���� enter�� �ٷ� �Էµ�, %c �տ� ������ �ξ� enter����

	printf("�Էµ� ���� : %d\n", a);
	printf("�Էµ� �Ǽ� : %f\n", b);
	printf("�Էµ� ���� : %c\n", c);
	return 0;
}