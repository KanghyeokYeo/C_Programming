#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5];
	int* b = a;
	int size = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < size; i++) {
		printf("%d��° ������ �Է��ϼ���",i+1);
		scanf("%d", b+i);
	}
	
	int max = *b;
	int index = 0;
	/*for (int i = 0; i < size; i++) {
		if (max < *(b + i)) {
			max = *(b + i);
			index = i;
		}
	}*/

	for (int i = 0; i < size; i++) {
		if (max < b[i]) {
			max = b[i];
			index = i;
		}
	}

	printf("�ְ����� %d��° ������ %d�Դϴ�", index+1, max);
	return 0;
}