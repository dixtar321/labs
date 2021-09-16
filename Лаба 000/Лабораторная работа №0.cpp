#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c, res; //Программа (ЛР №0) высчитывает разность между 2-ым и 3-им числами
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	res = b - c;
	printf("Result: %d - %d = %d", b, c, res);
	return 0;
}
