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
	int max=scores[0];
	int maxIndex=0;
	for (int j = 0; j < size - 1; j++) {
		if (max < scores[j + 1]) {
			max = scores[j + 1];
			maxIndex = j + 1;
		}
	}
	printf("�ְ����� %d��° ������ %d�Դϴ�.", maxIndex + 1, max);
	return 0;
}