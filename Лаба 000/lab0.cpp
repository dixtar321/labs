#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c, res;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the first number: ");
	scanf("%d", &b);
	printf("Enter the first number: ");
	scanf("%d", &c);
	res = b - c;
	printf("Result: %d - %d = %d", b, c, res);
	return 0;
}