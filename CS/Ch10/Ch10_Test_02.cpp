#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float BMI(float x, float y);

int main() {
	float a, b;
	printf("Ű�� �Է��ϼ���(cm)\n");
	scanf("%f", &a); // double ������ ��� %lf �Է�

	printf("�����Ը� �Է��ϼ���(kg)\n");
	scanf("%f", &b);
	
	float nowBMI = BMI(a, b);
	printf("����� BMI������ %.1f�Դϴ�.\n",nowBMI);

	if (nowBMI >= 35) {
		printf("�� ���Դϴ�.");
	}
	else if (nowBMI >= 30) {
		printf("�ߵ� ���Դϴ�.");
	}
	else if (nowBMI >= 25) {
		printf("�浵 ���Դϴ�.");
	}
	else if (nowBMI >= 23) {
		printf("��ü���Դϴ�.");
	}
	else if (nowBMI >= 18.5) {
		printf("�����Դϴ�.");
	}
	else
	{
		printf("��ü���Դϴ�.");
	}
	return 0;
}
float BMI(float x, float y) {
	return (y*10000) / (x * x);
}