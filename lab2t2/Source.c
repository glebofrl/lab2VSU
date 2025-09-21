#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int N = 14, K = 58;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K + N * 60);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);


	printf("Текущий час  = %.3f суток  и текущая минута = %.3f часа\n", N/24., K/60.);

	getchar();
}