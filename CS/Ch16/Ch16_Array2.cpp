#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	// 2���� �迭 ����
	/* arr[n][m]
	* 	     m��
	* 	  ����������
	* n�� ����������
	* 	  ����������
	*/

	int arr1[3][5] = { {1,2,3},{1,2,3,4},{1,2} }; // ũ�⺸�� ���� �ʱ�ȭ�� ��� �� �ڸ��� 0�� ä������

	// �迭 ��� ���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int arr2[3][5] = { 1,2,3,4,5,6,7 }; // �� ������ ������ �����Ǹ� �������� 0���� ä������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// ���ڿ� : �ּ� �Է��� ���ڼ� + 1 ũ�� ����
	// "Hi, Minho!" ���ڿ�
	char s1[11] = { 'H','i',',',' ','M','i','n','h','o','!','\0' }; // \0:NULL(��������)
	for (int i = 0; i < 11; i++)printf("%c", s1[i]);
	printf("\n");

	char s2[11] = "Hi, Minho!"; // "" �ȿ� ���ڿ� �Է�
	printf("%s", s2); // %s ���ڿ�
	printf("\n");
	return 0;
}