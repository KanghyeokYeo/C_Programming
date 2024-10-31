#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int x, int y);

// 원래 코드
//int main() {
//	int a;
//	printf("월을 입력하세요\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf("%d월은 31일까지 있습니다", a);
//		break;
//	case 2:
//		printf("%d월은 28일까지 있습니다", a);
//		break;
//	case 4:	case 6:	case 9:	case 11:
//		printf("%d월은 30일까지 있습니다", a);
//		break;
//	}
//
//	return 0;
//}

int main() {
	int a ,b;
	printf("월을 입력하세요\n");
	scanf("%d", &a);
	switch(a)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		b = 31;
		break;
	case 2:
		b = 28;
		break;
	default:
		b = 30;
		break;
	}
	printf("%d월은 %d일까지 있습니다",a,b);
	return 0;
}