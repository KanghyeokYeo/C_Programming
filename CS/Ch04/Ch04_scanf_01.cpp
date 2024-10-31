#define _CRT_SECURE_NO_WARNINGS //scanf 경고무시
#include<stdio.h>
int main() {
	int a;
	printf("정수입력 : ");
	scanf("%d", &a);
	
	float b;
	printf("실수입력 : ");
	scanf("%f", &b);

	char c;
	printf("문자입력 : ");
	scanf(" %c", &c); //버퍼로 인해 enter가 바로 입력됨, %c 앞에 공백을 두어 enter무시

	printf("입력된 정수 : %d\n", a);
	printf("입력된 실수 : %f\n", b);
	printf("입력된 문자 : %c\n", c);
	return 0;
}