#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int char_to_ASCII(char a);
int main() {
	char x;

	printf("문자를 입력하세요\n");
	scanf("%c", &x);

	printf("당신이 입력한 문자의 아스키코드는 %d입니다", char_to_ASCII(ch));

	return 0;
}
int char_to_ASCII(char a) {
	return a;
}