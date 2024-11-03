#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	for (int i = 2; i <= 9; i++) {
		if (i%2==0) continue; // break를 사용하려면 아래에서
		for (int j = 1; j <= 9; j++) {
			// if (i % 2 == 0) break; 를 사용하여 이용 가능
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}