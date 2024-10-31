#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a,b,c;
	printf("첫번째 시험점수는 몇점인가요?\n");
	scanf("%d", &a);
	printf("두번째 시험점수는 몇점인가요?\n");
	scanf("%d", &b);
	printf("세번째 시험점수는 몇점인가요?\n");
	scanf("%d", &c);
	
	double avg = (a + b + c) / 3.0;
	printf("당신의 평균은 %.1lf점입니다\n",avg); // double형 변수이므로 %lf
	if (avg >= 90) printf("당신은 A학점입니다!\n");
	else if (avg >= 80) printf("당신은 B학점입니다!\n");
	else if (avg >= 70) printf("당신은 C학점입니다!\n");
	else if (avg >= 60) {printf("당신은 D학점입니다!\n");
	elseprintf("당신은 F학점입니다!\n");

	return 0;
}