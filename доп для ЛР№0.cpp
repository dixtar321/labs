#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, res; //Программа (ДОП №0) высчитывает модуль разности 2-ух чисел

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
	
	else
		printf("Result: %d - %d = %d", a, b, res);

	return 0;
}
