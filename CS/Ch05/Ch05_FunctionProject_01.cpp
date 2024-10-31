#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float scanfFun();

int main() {
	float a = scanfFun();
	printf("당신이 입력한 실수는 %f입니다.", a);
	return 0;
}

float scanfFun() {
	float x;

	printf("실수를 입력하세요 : ");
	scanf("%f", &x);
}

//int main() {
//	printf("실수를 입력하세요\n");
//	float fl;
//	scanf("%f", &fl);
//	printf("당신이 입력한 실수는 %f입니다.", fl);
//	return 0;
//}