#include <stdio.h>
#include <locAle.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float A = 21.317;
	printf("Вариант 33\n");
	int firstNum = A;
	int secondNum = (A - firstNum) * 1000 + 0.5;
	float result = secondNum + firstNum / 100.;
	printf("Исходное число: %.3f\nИтог: %.2f", A, result);
	getchar();
	
}