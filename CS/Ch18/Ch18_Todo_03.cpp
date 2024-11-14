#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5];
	int* b = a;
	int size = sizeof(a) / sizeof(a[0]);
	int sum = 0;
	for (int i = 0; i < size; i++) {
		printf("%d번째 학생의 시험점수를 입력하세요",i+1);
		scanf("%d", b+i); // &a[i]와 같다
	}
	
	for (int i = 0; i < size; i++) sum += *(b + i);
	int avg = sum / size;
	printf("%d명 학생의 평균은 %d입니다", size, avg);
	return 0;
}