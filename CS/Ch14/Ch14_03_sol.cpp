#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int input;
	printf("�� ���� �����ұ��?");
	scanf("%d", &input);

	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if (i == input) break; // for j���� break ����
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}