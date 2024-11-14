#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	// 주소연산자 &
	// 포인터 변수 *
	int a = 3;
	int* b = &a; // b에 a변수 주소값 대입

	printf("a의 값 : %d\n", a);
	printf("a의 주소값(&a) : %d\n", &a);
	printf("a의 주소값(b) : %d\n", b); // b는 a의 주소값
	printf("b의 주소값을 통한 역참조(*b) : %d\n", *b); // *b는 주소값을 통한 역참조
	printf("\n");

	a = 5; // a의 값을 변경한다 하더라도 a의 주소값은 프로그렘이 종료되기 전까지는 변하지 않는다
	printf("a의 값 : %d\n", a);
	printf("a의 주소값(&a) : %d\n", &a);
	printf("a의 주소값(b) : %d\n", b);
	printf("b의 주소값을 통한 역참조(*b) : %d\n", *b);
	printf("\n");

	// 포인터 변수 크기 : 항상 같다(32비트 : 4바이트), (64비트 : 8바이트)
	float fl;
	double dl;
	float* flPtr = &fl;
	double* dlPtr = &dl;

	printf("float형 크기 %d\n", sizeof(fl));
	printf("double형 크기 %d\n", sizeof(dl));
	printf("float포인터 크기 %d\n", sizeof(flPtr));
	printf("double포인터 크기 %d\n", sizeof(dlPtr));


	return 0;
}