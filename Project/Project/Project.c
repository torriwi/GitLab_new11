#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int b=101;
	int c = 300;
	scanf("%d", &a);
	a = a + b - c;
	printf("%d", a);
	return 0;
}
