#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	do {
		printf("당신이 가고 싶은 곳은 어디인가요?\n");
		printf("1. 괌\n");
		printf("2. 파리\n");
		printf("3. 두바이\n");
		printf("4. 피렌체\n");
		printf("5. 뉴욕\n");
		printf("가고싶은 곳의 번호를 선택하세요\n");
		scanf("%d", &a);
	} while (a < 1 || a>5);
	switch (a)
	{
	case 1: printf("지금 바로 괌으로 여행을 떠나세요");
		break;
	case 2: printf("지금 바로 파리로 여행을 떠나세요");
		break;
	case 3: printf("지금 바로 두바이로 여행을 떠나세요");
		break;
	case 4: printf("지금 바로 피렌체로 여행을 떠나세요");
		break;
	case 5: printf("지금 바로 뉴욕으로 여행을 떠나세요");
		break;
	}
	return 0;
}