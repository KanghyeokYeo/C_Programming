#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double a, b;
	printf("Ű�� �Է��ϼ���(cm)\n");
	scanf("%lf", &a);

	printf("�����Ը� �Է��ϼ���(kg)\n");
	scanf("%lf", &b);

	a = 0.01 * a; // cm => m ��ȯ
	double BMI = b / (a * a);

	printf("����� BMI������ %.1f�Դϴ�.\n", BMI);

	if (BMI >= 35) printf("�� ���Դϴ�.");
	else if (BMI >= 30) printf("�ߵ� ���Դϴ�.");
	else if (BMI >= 25) printf("�浵 ���Դϴ�.");
	else if (BMI >= 23) printf("��ü���Դϴ�.");
	else if (BMI >= 18.5) printf("�����Դϴ�.");
	else printf("��ü���Դϴ�.");

	return 0;
}