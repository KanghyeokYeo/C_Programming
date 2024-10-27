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

	printf("%.2f시간은 %d시간 %d분 %d초입니다.", time, h, m, s);
	return 0;
}