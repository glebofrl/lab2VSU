#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	float n = 3, L = 333;

	printf("����:\n%12.0f\n%12.0f\n        _______\n�����:\n        %+08.3f", n, L, n/L);

	getchar();
}