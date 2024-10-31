#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	printf("당신의 시험점수는 몇점인가요?\n");
	scanf("%d", &a);

	switch (a/10)
	{
	case 10: case 9:
		printf("당신은 A학점입니다.");
		break;
	case 8:
		printf("당신은 B학점입니다.");
		break;
	case 7:
		printf("당신은 C학점입니다.");
		break;
	default:
		printf("당신은 F학점입니다.");
		break;
	}
	
	return 0;
}