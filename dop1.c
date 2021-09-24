#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() { //Ââåñòè N íàòóðàëüíûõ ÷èñåë. Çàâåðøèòü ââîä 0-ì. Âûâåñòè ìàêñèìàëüíîå ÷èñëî, ìèíèìàëüíîå ÷èñëî è èõ íîìåðà.
	int rs=5, IndexMax=0, IndexMin=0;
	int N[5], Max = 0, Min = 1000, i, input;

	printf("Enter 5 numbers\n");
	scanf_s("%d %d %d %d %d", &N[0], &N[1], &N[2], &N[3], &N[4]);
	for (i = 0; i < rs; i++) {
		
		if (N[i] > Max) {
			Max = N[i];
			IndexMax = i;
		}
		if (N[i] < Min) {
			Min = N[i];
			IndexMin = i;
		}
	}
	printf("Largest number: %d - %d\n", Max, IndexMax);
	printf("Minimal number: %d - %d", Min, IndexMin);
	return 0;
}
