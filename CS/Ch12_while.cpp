#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		printf("�ȳ��ϼ���\n");
		i++;
	}

	// i = 0, i < 10 true => "�ȳ��ϼ���" , i = 1
	// i = 1, i < 10 true => "�ȳ��ϼ���" , i = 2
	// i = 2, i < 10 true => "�ȳ��ϼ���" , i = 3
	// i = 3, i < 10 true => "�ȳ��ϼ���" , i = 4
	// i = 4, i < 10 true => "�ȳ��ϼ���" , i = 5
	// i = 5, i < 10 true => "�ȳ��ϼ���" , i = 6
	// i = 6, i < 10 true => "�ȳ��ϼ���" , i = 7
	// i = 7, i < 10 true => "�ȳ��ϼ���" , i = 8
	// i = 8, i < 10 true => "�ȳ��ϼ���" , i = 9
	// i = 9, i < 10 true => "�ȳ��ϼ���" , i = 10
	// i = 10, i < 10 false => X
	return 0;
}