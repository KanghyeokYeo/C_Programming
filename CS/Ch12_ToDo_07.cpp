#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int a);

int main() {
	int input;
	printf("수를 입력하세요\n");
	scanf("%d", &input);


	printf("1부터 %d까지의 합은 %d입니다.", input, sum(input));
	return 0;
}

int sum(int a) {
	int result = 0;
	int i = 1;
	while (i <= a) {
		result += i;
		i++;
	}
	return result;
}