#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	bool isTrue;
	printf("�⵵�� �Է��ϼ���");
	scanf("%d", &a);
	if (!(a % 4)) {
		if (!(a % 100)) {
			if (!(a % 400)) isTrue = true;
			else isTrue = false;
		}
		else isTrue = true;
	}
	else isTrue = false;

	if (isTrue) printf("�����Դϴ�");
	else printf("����Դϴ�");

	return 0;
}