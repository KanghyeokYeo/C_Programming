#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float scanfFun();

int main() {
	float a = scanfFun();
	printf("����� �Է��� �Ǽ��� %f�Դϴ�.", a);
	return 0;
}

float scanfFun() {
	float x;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%f", &x);
}

//int main() {
//	printf("�Ǽ��� �Է��ϼ���\n");
//	float fl;
//	scanf("%f", &fl);
//	printf("����� �Է��� �Ǽ��� %f�Դϴ�.", fl);
//	return 0;
//}