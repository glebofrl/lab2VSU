#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int N = 14, K = 58;

	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K + N * 60);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", (N - 8) * 3600 + K * 60);


	printf("������� ���  = %.3f �����  � ������� ������ = %.3f ����\n", N/24., K/60.);

	getchar();
}