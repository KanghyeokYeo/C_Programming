#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int scores[5];
	int size = sizeof(scores) / sizeof(scores[0]);
	for (int i = 0; i < size; i++) {
		printf("%d��° ������ �Է��ϼ���", i + 1);
		scanf("%d", &scores[i]);
	}
	int min = scores[0];
	int minIndex = 0;
	for (int j = 0; j < size - 1; j++) {
		if (min > scores[j + 1]) {
			min = scores[j + 1];
			minIndex = j + 1;
		}
	}
	printf("���������� %d��° ������ %d�Դϴ�.", minIndex + 1, min);
	return 0;
}