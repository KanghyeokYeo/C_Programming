#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int scores[5];
	printf("ù��° �л��� ���������� �Է��ϼ���");
	scanf("%d", &scores[0]);
	printf("�ι�° �л��� ���������� �Է��ϼ���");
	scanf("%d", &scores[1]);
	printf("����° �л��� ���������� �Է��ϼ���");
	scanf("%d", &scores[2]);
	printf("�׹�° �л��� ���������� �Է��ϼ���");
	scanf("%d", &scores[3]);
	printf("�ټ���° �л��� ���������� �Է��ϼ���");
	scanf("%d", &scores[4]);
	int sum = 0;
	for (int i = 0; i < 5; i++) sum += scores[i];
	int avg = sum / 5;
	printf("5�� �л��� ����� %d�Դϴ�.", avg);
	return 0;
}