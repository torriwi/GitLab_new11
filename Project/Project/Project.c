#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	printf("Введите 2 целых числа:");
	scanf("%d %d", &a, &b);
	printf("%d", a - b);
	return 0;
}
