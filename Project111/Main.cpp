#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double time = 3.76;
	int h, m, s;

	h = (int)time;

	time -= h;
	time *= 60;
	m = (int)time;

	time -= m;
	time *= 60;
	s = (int)time;

	time = 3.76;

	printf("%.2f�ð��� %d�ð� %d�� %d���Դϴ�.", time, h, m, s);
	return 0;
}