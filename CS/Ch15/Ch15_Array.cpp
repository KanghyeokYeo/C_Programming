#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int aa[5] = { 1,1,1,1,1 }; // ����� ���ÿ� �ʱ�ȭ
	int bb[5]; // ����
	bb[0] = 1;
	bb[1] = 2;
	bb[2] = 3;
	bb[3] = 4;
	bb[4] = 5;
	// �迭�� 0���� ����

	// Ȯ��
	// sizeof(�迭) : �迭 �ڷ��� ũ��
	// sizeof(�迭�� �ڷ���) : �迭 �ڷ����� ũ��
	// sizeof(�迭)/sizeof(�迭�� �ڷ���)
	for (int i = 0; i < sizeof(aa)/sizeof(int); i++) printf("aa[%d] = %d\n", i, aa[i]);
	printf("\n");
	printf("\n");
	for (int i = 0; i < sizeof(bb) / sizeof(int); i++) printf("bb[%d] = %d\n", i, bb[i]);
	return 0;
}