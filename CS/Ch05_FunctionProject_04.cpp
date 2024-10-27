#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void ave(float a, float b);
int main() {
	printf("첫번째 실수를 입력하세요\n");
	float x;
	scanf("%f", &x);

	printf("두번째 실수를 입력하세요\n");
	float y;
	scanf("%f", &y);

	ave(x, y);
	return 0;
}
void ave(float a, float b) {
	float result;
	result = (a + b) / 2;
	printf("결과 : %f", result);
}