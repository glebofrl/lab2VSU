#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	float n = 3, L = 133;
	int k = 3, m = 1;

	printf("Дано:\n%12.0f\n%12.0f\n        _______\nОтвет:\n        %+08.3f", n, L, n/L );

	getchar();
}