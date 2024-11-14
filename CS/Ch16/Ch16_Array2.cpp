#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	// 2차원 배열 선언
	/* arr[n][m]
	* 	     m개
	* 	  ㅁㅁㅁㅁㅁ
	* n개 ㅁㅁㅁㅁㅁ
	* 	  ㅁㅁㅁㅁㅁ
	*/

	int arr1[3][5] = { {1,2,3},{1,2,3,4},{1,2} }; // 크기보다 작은 초기화인 경우 빈 자리에 0이 채워진다

	// 배열 요소 출력
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int arr2[3][5] = { 1,2,3,4,5,6,7 }; // 행 단위로 차래로 지정되며 나머지는 0으로 채워진다
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 문자열 : 최소 입력할 문자수 + 1 크기 지정
	// "Hi, Minho!" 문자열
	char s1[11] = { 'H','i',',',' ','M','i','n','h','o','!','\0' }; // \0:NULL(생략가능)
	for (int i = 0; i < 11; i++)printf("%c", s1[i]);
	printf("\n");

	char s2[11] = "Hi, Minho!"; // "" 안에 문자열 입력
	printf("%s", s2); // %s 문자열
	printf("\n");
	return 0;
}