#include<stdio.h>
int main() {
	int a = 7, b = 5;
	printf("a의 값은 %d 이다.\n", a);
	printf("b의 값은 %d 이다.\n", b);
	printf("a와 b를 더한 값은 %d 이다.\n", a + b);
	printf("a와 b의 값을 서로 바꾸겠습니다.\n");
	int temp = a;
	a = b;
	b = temp;
	printf("a의 값은 %d 이다.\n", a);
	printf("b의 값은 %d 이다.\n", b);
	return 0;
}