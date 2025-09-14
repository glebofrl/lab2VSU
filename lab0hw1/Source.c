#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	float a=21.317;
	printf("Вариант 33\n");
	printf("Исходное число: %.3f\nИтог: %.2f", a, a*10);

	getchar();
}