#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int i = 1;
	while (i <= 100) {
		if (i % 4 == 0) printf("%d\n", i);
		i++;
	}
	
	return 0;
}