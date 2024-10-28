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
	if (a < 40 || b < 40 || c < 40)
	{
		printf("40점을 넘지 못했습니다\n당신은 F학점입니다!\n");
		return 0; // 프로그램 종료 선언!
	}
	else {
		float avg = (a + b + c) / 3.0f;
		printf("당신의 평균은 %.1f점입니다\n", avg);
		switch ((int)avg / 10) {
		case 10: case 9:
			printf("당신은 A학점입니다!\n");
			break;
		case 8:
			printf("당신은 B학점입니다!\n");
			break;
		case 7:
			printf("당신은 C학점입니다!\n");
			break;
		case 6:
			printf("당신은 D학점입니다!\n");
			break;
		default:
			printf("당신은 F학점입니다!\n");
			break;
		}
	}
	return 0;
}