#include <stdio.h>
#include <locAle.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float A = 21.317;
	printf("������� 33\n");
	int firstNum = A;
	int secondNum = (A - firstNum) * 1000 + 0.5;
	float result = secondNum + firstNum / 100.;
	printf("�������� �����: %.3f\n����: %.2f", A, result);
	getchar();
	
}