#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int scores[5];
	int size = sizeof(scores) / sizeof(scores[0]);
	for (int i = 0; i < size; i++) {
		printf("%d번째 성적을 입력하세요", i + 1);
		scanf("%d", &scores[i]);
	}
	int min = scores[0];
	int minIndex = 0;
	for (int j = 0; j < size - 1; j++) {
		if (min > scores[j + 1]) {
			min = scores[j + 1];
			minIndex = j + 1;
		}
	}
	printf("최저성적은 %d번째 성적인 %d입니다.", minIndex + 1, min);
	return 0;
}