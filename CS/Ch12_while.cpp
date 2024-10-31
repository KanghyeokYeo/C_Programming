#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		printf("æ»≥Á«œººø‰\n");
		i++;
	}

	// i = 0, i < 10 true => "æ»≥Á«œººø‰" , i = 1
	// i = 1, i < 10 true => "æ»≥Á«œººø‰" , i = 2
	// i = 2, i < 10 true => "æ»≥Á«œººø‰" , i = 3
	// i = 3, i < 10 true => "æ»≥Á«œººø‰" , i = 4
	// i = 4, i < 10 true => "æ»≥Á«œººø‰" , i = 5
	// i = 5, i < 10 true => "æ»≥Á«œººø‰" , i = 6
	// i = 6, i < 10 true => "æ»≥Á«œººø‰" , i = 7
	// i = 7, i < 10 true => "æ»≥Á«œººø‰" , i = 8
	// i = 8, i < 10 true => "æ»≥Á«œººø‰" , i = 9
	// i = 9, i < 10 true => "æ»≥Á«œººø‰" , i = 10
	// i = 10, i < 10 false => X
	return 0;
}