#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void upArr(int* x);
int main() {
	int a[3];
	int* b = a;
	printf("�� 3���� ���ʷ� �Է��ϼ���\n");
	for (int i = 0; i < 3; i++) {
		scanf("%d", b + i);
	}

	upArr(b);

	printf("���� ����� ");
	for (int i = 0; i < 3; i++) {
		printf("%d", a[i]);
		if (i != 2) printf(", ");
	}
	printf("�Դϴ�");
	return 0;
}
void upArr(int* x) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (x[j] > x[j+1]) {
				int temp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = temp;
			}
		}
	}
}