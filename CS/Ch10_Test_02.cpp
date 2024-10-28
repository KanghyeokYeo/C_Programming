#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float BMI(float x, float y);

int main() {
	float a, b;
	printf("키를 입력하세요(cm)\n");
	scanf("%f", &a); // double 변수인 경우 %lf 입력

	printf("몸무게를 입력하세요(kg)\n");
	scanf("%f", &b);
	
	float nowBMI = BMI(a, b);
	printf("당신의 BMI지수는 %.1f입니다.\n",nowBMI);

	if (nowBMI >= 35) {
		printf("고도 비만입니다.");
	}
	else if (nowBMI >= 30) {
		printf("중도 비만입니다.");
	}
	else if (nowBMI >= 25) {
		printf("경도 비만입니다.");
	}
	else if (nowBMI >= 23) {
		printf("과체중입니다.");
	}
	else if (nowBMI >= 18.5) {
		printf("정상입니다.");
	}
	else
	{
		printf("저체중입니다.");
	}
	return 0;
}
float BMI(float x, float y) {
	return (y*10000) / (x * x);
}