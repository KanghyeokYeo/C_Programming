#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("실수를 입력하세요\n");
	float fl;
	scanf("%f", &fl);
	printf("당신이 입력한 실수는 %.4f입니다.", fl);
	return 0;
}