#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a,b,c;
	printf("ù��° ���������� �����ΰ���?\n");
	scanf("%d", &a);
	printf("�ι�° ���������� �����ΰ���?\n");
	scanf("%d", &b);
	printf("����° ���������� �����ΰ���?\n");
	scanf("%d", &c);
	
	double avg = (a + b + c) / 3.0;
	printf("����� ����� %.1lf���Դϴ�\n",avg); // double�� �����̹Ƿ� %lf
	if (avg >= 90) printf("����� A�����Դϴ�!\n");
	else if (avg >= 80) printf("����� B�����Դϴ�!\n");
	else if (avg >= 70) printf("����� C�����Դϴ�!\n");
	else if (avg >= 60) {printf("����� D�����Դϴ�!\n");
	elseprintf("����� F�����Դϴ�!\n");

	return 0;
}