#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float n = 4, L = 393;
	int k = 2, m = 6;
	int sumkm = k + m;

	printf("Дано:\n");
	printf("%*.f\n", sumkm + 2, n);
	printf("%*.f\n", sumkm + 2, L);
	printf("%*c%.*s\n", 7, ' ', sumkm + 2, "__________________________________________________________________");
	printf("Ответ:\n");
	printf("%*c%+0*.*f", sumkm - 1, ' ', sumkm + 2, m, n / L);

	getchar();
}