#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int scores[5];
	printf("첫번째 학생의 시험점수를 입력하세요");
	scanf("%d", &scores[0]);
	printf("두번째 학생의 시험점수를 입력하세요");
	scanf("%d", &scores[1]);
	printf("세번째 학생의 시험점수를 입력하세요");
	scanf("%d", &scores[2]);
	printf("네번째 학생의 시험점수를 입력하세요");
	scanf("%d", &scores[3]);
	printf("다섯번째 학생의 시험점수를 입력하세요");
	scanf("%d", &scores[4]);
	int sum = 0;
	for (int i = 0; i < 5; i++) sum += scores[i];
	int avg = sum / 5;
	printf("5명 학생의 평균은 %d입니다.", avg);
	return 0;
}