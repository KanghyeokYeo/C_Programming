#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("당신의 시험점수는 몇점인가요?\n");
	scanf("%d", &a);
	if (a >= 90 ) {
		printf("당신은 A학점입니다!\n");
	}
	else if (a >= 80 ) {
		printf("당신은 B학점입니다!\n");
	}
	else if (a >= 70 )
	{
		printf("당신은 C학접입니다!\n");
	}
	else
	{
		printf("당신은 F학점입니다!\n");
	}
	return 0;
}