#include<stdio.h>
int main() {
	printf("%d\n", 10);
	printf("%f\n", 3.4);
	printf("%.1f\n", 3.5);
	printf("%.10f\n", 3.4);

	int a = 10, b = 20;
	printf("%d과 %d의 합은 %d입니다\n", a, b, a + b);

	float c = 3.4, d = 1.2;
	printf("%.1f-%.1f = %.1f", c, d, c - d);
	return 0;
}