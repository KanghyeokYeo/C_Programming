#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	printf("A타입 시험점수는 몇점인가요?\n");
	scanf("%d", &a);

	printf("B타입 시험점수는 몇점인가요?\n");
	scanf("%d", &b);
	
	if (a >= 80 && b >= 70) {
		printf("PASS");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}