#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0;

	do {
		printf("안녕하세요\n");
		i++;
	} while (false); // 거짓이더라도 한번은 수행

	return 0;
}