#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void ave(float a, float b);
int main() {
	printf("ù��° �Ǽ��� �Է��ϼ���\n");
	float x;
	scanf("%f", &x);

	printf("�ι�° �Ǽ��� �Է��ϼ���\n");
	float y;
	scanf("%f", &y);

	ave(x, y);
	return 0;
}
void ave(float a, float b) {
	float result;
	result = (a + b) / 2;
	printf("��� : %f", result);
}