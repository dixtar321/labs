#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() { //������ N ����������� �����. ��������� ���� 0-�. ������� ����� ������������� �����.
	int N, Max = 0, i, input;
	printf("Enter the number of digits you want to enter, then enter these numbers (end it 0): "); 
	scanf_s("%d", &N);

	for (i = 0; i < N - 1; i++) {
		scanf_s("%d ", &input);
		if (input > Max) {
			Max = input;
		}
	}
	printf("Largest number: %d", Max);
	return 0;

}