#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	int aa[5] = { 1,1,1,1,1 }; // 선언과 동시에 초기화
	int bb[5]; // 선언
	bb[0] = 1;
	bb[1] = 2;
	bb[2] = 3;
	bb[3] = 4;
	bb[4] = 5;
	// 배열은 0부터 시작

	// 확인
	// sizeof(배열) : 배열 자료의 크기
	// sizeof(배열의 자료형) : 배열 자료형의 크기
	// sizeof(배열)/sizeof(배열의 자료형)
	for (int i = 0; i < sizeof(aa)/sizeof(int); i++) printf("aa[%d] = %d\n", i, aa[i]);
	printf("\n");
	printf("\n");
	for (int i = 0; i < sizeof(bb) / sizeof(int); i++) printf("bb[%d] = %d\n", i, bb[i]);
	return 0;
}