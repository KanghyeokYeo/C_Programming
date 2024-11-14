#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime>
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	int aSize = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < aSize; i++) printf("a[%d]의 주소 : %d\n", i, &a[i]);
	printf("배열에서 이름 a의 값 : %d", a); // a는 &a[0]와 일치한다

	// 포인터를 사용한 배열의 값 변경
	printf("a[0]에 저장된 값은 %d\n", a[0]);
	*b = 10;
	printf("a[0]에 저장된 값은 %d\n", a[0]);

	// 포인터에서 +1이란
	b = b + 1; //b = &a[0] => &a[1]
	printf("a[1]의 주소 : %d\n", &a[1]);
	printf("b의 값 : %d\n", b);

	return 0;
}