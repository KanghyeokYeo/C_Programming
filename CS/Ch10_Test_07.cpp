#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	bool isTrue;
	printf("년도를 입력하세요");
	scanf("%d", &a);
	if (!(a % 4)) {
		if (!(a % 100)) {
			if (!(a % 400)) isTrue = true;
			else isTrue = false;
		}
		else isTrue = true;
	}
	else isTrue = false;

	if (isTrue) printf("윤년입니다");
	else printf("평년입니다");

	return 0;
}