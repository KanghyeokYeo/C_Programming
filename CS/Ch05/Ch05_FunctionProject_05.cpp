#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(float h);
int main() {
	printf("cm를 m로 변환해드릴게요.\n");
	printf("당신의 키를 cm단위로 입력하세요\n");
	float h;
	scanf("%f", &h);
	fun(h);
	return 0;
}
void fun(float h) {
	float result = h / 100;
	printf("결과 : %.2fm", result);
}