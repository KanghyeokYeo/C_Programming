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
	if (a < 40 || b < 40 || c < 40)
	{
		printf("40���� ���� ���߽��ϴ�\n����� F�����Դϴ�!\n");
		return 0; // ���α׷� ���� ����!
	}
	else {
		float avg = (a + b + c) / 3.0f;
		printf("����� ����� %.1f���Դϴ�\n", avg);
		switch ((int)avg / 10) {
		case 10: case 9:
			printf("����� A�����Դϴ�!\n");
			break;
		case 8:
			printf("����� B�����Դϴ�!\n");
			break;
		case 7:
			printf("����� C�����Դϴ�!\n");
			break;
		case 6:
			printf("����� D�����Դϴ�!\n");
			break;
		default:
			printf("����� F�����Դϴ�!\n");
			break;
		}
	}
	return 0;
}