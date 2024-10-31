#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double a, b;
	printf("키를 입력하세요(cm)\n");
	scanf("%lf", &a);

	printf("몸무게를 입력하세요(kg)\n");
	scanf("%lf", &b);

	a = 0.01 * a; // cm => m 전환
	double BMI = b / (a * a);

	printf("당신의 BMI지수는 %.1f입니다.\n", BMI);

	if (BMI >= 35) printf("고도 비만입니다.");
	else if (BMI >= 30) printf("중도 비만입니다.");
	else if (BMI >= 25) printf("경도 비만입니다.");
	else if (BMI >= 23) printf("과체중입니다.");
	else if (BMI >= 18.5) printf("정상입니다.");
	else printf("저체중입니다.");

	return 0;
}