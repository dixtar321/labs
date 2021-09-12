#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, res;

	printf("Enter the first number: ");
	scanf("%d", &a);

	printf("Enter the second number: ");
	scanf("%d", &b);

	res = (a - b);

	if (res < 0) {
		res = -res;
		printf("Result: %d - %d = %d", a, b, res);
	}

	else if (res > 0) {
		printf("Result: %d - %d = %d", a, b, res);
	}

	return 0;
}