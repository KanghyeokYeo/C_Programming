#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdlib>
#include <ctime> 

int main() {
	// 2託据 壕伸 識情
	/* arr[n][m]
	* 	     m鯵
	* 	  けけけけけ
	* n鯵 けけけけけ
	* 	  けけけけけ
	*/

	int arr1[3][5] = { {1,2,3},{1,2,3,4},{1,2} }; // 滴奄左陥 拙精 段奄鉢昔 井酔 朔 切軒拭 0戚 辰趨遭陥

	// 壕伸 推社 窒径
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int arr2[3][5] = { 1,2,3,4,5,6,7 }; // 楳 舘是稽 託掘稽 走舛鞠悟 蟹袴走澗 0生稽 辰趨遭陥
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf(" %d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 庚切伸 : 置社 脊径拝 庚切呪 + 1 滴奄 走舛
	// "Hi, Minho!" 庚切伸
	char s1[11] = { 'H','i',',',' ','M','i','n','h','o','!','\0' }; // \0:NULL(持繰亜管)
	for (int i = 0; i < 11; i++)printf("%c", s1[i]);
	printf("\n");

	char s2[11] = "Hi, Minho!"; // "" 照拭 庚切伸 脊径
	printf("%s", s2); // %s 庚切伸
	printf("\n");
	return 0;
}